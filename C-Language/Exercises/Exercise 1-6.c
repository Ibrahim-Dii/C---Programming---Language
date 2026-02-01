#include <stdio.h>

main()
{
    int c;
    
    printf("Type a character (Ctrl+D for EOF): ");
    c = getchar();
    printf("getchar() != EOF = %d\n", c != EOF);
}