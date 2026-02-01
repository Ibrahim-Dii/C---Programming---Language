#include <stdio.h>

#define MAXWORDLEN 20  /* maximum word length to track */
#define MAXHEIGHT  50  /* maximum histogram height */
#define IN  1          /* inside a word */
#define OUT 0          /* outside a word */

/* print histogram of word lengths (vertical) */

main()
{
    int c, state, wordlen;
    int wordlengths[MAXWORDLEN];
    int i, j, maxcount;
    
    state = OUT;
    wordlen = 0;
    
    /* Initialize array */
    for (i = 0; i < MAXWORDLEN; ++i)
        wordlengths[i] = 0;
    
    /* Count word lengths */
    while ((c = getchar()) != EOF) {
        if (c == ' ' || c == '\n' || c == '\t') {
            if (state == IN) {
                if (wordlen < MAXWORDLEN)
                    ++wordlengths[wordlen];
                else
                    ++wordlengths[MAXWORDLEN-1];
                state = OUT;
                wordlen = 0;
            }
        } else {
            ++wordlen;
            state = IN;
        }
    }
    
    /* Handle last word if file doesn't end with whitespace */
    if (state == IN) {
        if (wordlen < MAXWORDLEN)
            ++wordlengths[wordlen];
        else
            ++wordlengths[MAXWORDLEN-1];
    }
    
    /* Find maximum count for scaling */
    maxcount = 0;
    for (i = 1; i < MAXWORDLEN; ++i)
        if (wordlengths[i] > maxcount)
            maxcount = wordlengths[i];
    
    /* Print vertical histogram */
    printf("Word Length Histogram (Vertical):\n\n");
    
    /* Print top to bottom */
    for (i = MAXHEIGHT; i > 0; --i) {
        printf("%3d |", i);
        for (j = 1; j < MAXWORDLEN; ++j) {
            if (wordlengths[j] * MAXHEIGHT / maxcount >= i)
                printf(" * ");
            else
                printf("   ");
        }
        printf("\n");
    }
    
    /* Print x-axis */
    printf("    +");
    for (j = 1; j < MAXWORDLEN; ++j)
        printf("---");
    printf("\n     ");
    for (j = 1; j < MAXWORDLEN; ++j)
        printf("%2d ", j);
    if (wordlengths[MAXWORDLEN-1] > 0)
        printf("%2d+", MAXWORDLEN-1);
    printf("\n");
}