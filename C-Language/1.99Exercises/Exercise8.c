#include <stdio.h>
/* Count blanks, tabs, and newlines */

main()
{
    int c, nb = 0, nt = 0, nl = 0;
    
    while ((c = getchar()) != EOF) {
        if (c == ' ') nb++;
        else if (c == '\t') nt++;
        else if (c == '\n') nl++;
    }
    
    printf("Blanks: %d, Tabs: %d, Newlines: %d\n", nb, nt, nl);
}