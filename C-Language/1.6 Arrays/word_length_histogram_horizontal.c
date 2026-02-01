#include <stdio.h>

#define MAXWORDLEN 20  /* maximum word length to track */
#define IN  1          /* inside a word */
#define OUT 0          /* outside a word */

/* print histogram of word lengths (horizontal) */

main()
{
    int c, state, wordlen;
    int wordlengths[MAXWORDLEN];
    int i, j;
    
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
    
    /* Print horizontal histogram */
    printf("Word Length Histogram (Horizontal):\n");
    for (i = 1; i < MAXWORDLEN; ++i) {
        printf("%2d: ", i);
        for (j = 0; j < wordlengths[i]; ++j)
            printf("*");
        printf("\n");
    }
    if (wordlengths[MAXWORDLEN-1] > 0) {
        printf("%2d+: ", MAXWORDLEN-1);
        for (j = 0; j < wordlengths[MAXWORDLEN-1]; ++j)
            printf("*");
        printf("\n");
    }
}