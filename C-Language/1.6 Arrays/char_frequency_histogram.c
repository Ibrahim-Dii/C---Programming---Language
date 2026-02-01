#include <stdio.h>

#define NUMCHARS 128  /* ASCII character set */

/* print histogram of character frequencies */

main()
{
    int c, i, j;
    int charfreq[NUMCHARS];
    
    /* Initialize array */
    for (i = 0; i < NUMCHARS; ++i)
        charfreq[i] = 0;
    
    /* Count character frequencies */
    while ((c = getchar()) != EOF)
        if (c < NUMCHARS)
            ++charfreq[c];
    
    /* Print histogram of printable characters */
    printf("Character Frequency Histogram:\n");
    for (i = 32; i < NUMCHARS; ++i) {  /* Start from space (32) */
        if (charfreq[i] > 0) {
            if (i == ' ')
                printf("' ' : ");
            else if (i == '\t')
                printf("\\t  : ");
            else if (i == '\n')
                printf("\\n  : ");
            else
                printf("%c   : ", i);
            
            for (j = 0; j < charfreq[i]; ++j)
                printf("*");
            printf("\n");
        }
    }
}