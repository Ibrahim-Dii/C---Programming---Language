#include <stdio.h>
/*Print one word per line*/

#define IN  1
#define OUT 0

main()
{
    int c, state = OUT;
    
    while ((c = getchar()) != EOF) {
        if (c == ' ' || c == '\n' || c == '\t') {
            if (state == IN) {
                putchar('\n');
                state = OUT;
            }
        }
        else {
            putchar(c);
            state = IN;
        }
    }
    
    if (state == IN) putchar('\n');
}