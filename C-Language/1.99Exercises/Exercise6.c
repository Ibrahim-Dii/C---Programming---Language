#include <stdio.h>
/* Exercise 1-6: Verify that the expression getchar() != EOF is 0 or 1 */

main()
{
    int c;
    
    printf("Type a character (Ctrl+D for EOF): ");
    c = getchar();
    printf("getchar() != EOF = %d\n", c != EOF);
}

/*Result: Returns 1 for any character, 0 for EOF*/