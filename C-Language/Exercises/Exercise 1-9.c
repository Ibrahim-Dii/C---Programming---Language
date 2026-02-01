#include <stdio.h>

main()
{
    int c, lastc = 'a';
    
    while ((c = getchar()) != EOF) {
        if (c != ' ' || lastc != ' ')
            putchar(c);
        lastc = c;
    }
}