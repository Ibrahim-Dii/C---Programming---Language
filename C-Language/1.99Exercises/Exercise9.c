#include <stdio.h>
/*Replace Multiple Blanks with Single*/

main()
{
    int c, lastc = 'a';
    
    while ((c = getchar()) != EOF) {
        if (c != ' ' || lastc != ' ')
            putchar(c);
        lastc = c;
    }
}