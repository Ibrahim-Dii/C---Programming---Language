#include <stdio.h>

/* count blanks, tabs, and newlines */

main()
{
    int c, nb, nt, nl;
    
    nb = 0;  /* blank count */
    nt = 0;  /* tab count */
    nl = 0;  /* newline count */
    
    while ((c = getchar()) != EOF) {
        if (c == ' ')
            ++nb;
        else if (c == '\t')
            ++nt;
        else if (c == '\n')
            ++nl;
    }
    
    printf("Blanks: %d\n", nb);
    printf("Tabs: %d\n", nt);
    printf("Newlines: %d\n", nl);
}