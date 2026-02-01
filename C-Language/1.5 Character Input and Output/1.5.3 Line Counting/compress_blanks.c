#include <stdio.h>

/* copy input to output, replacing multiple blanks with single blank */

main()
{
    int c, lastc;
    
    lastc = 'a';  /* initialize with non-blank character */
    
    while ((c = getchar()) != EOF) {
        if (c != ' ' || lastc != ' ')
            putchar(c);
        lastc = c;
    }
}