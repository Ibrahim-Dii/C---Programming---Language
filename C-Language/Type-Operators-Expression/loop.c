#include <stdio.h>

#define LIM 100

int main() {
    int i, c;
    char s[LIM];

    /* Original loop with &&:
     * for (i = 0; i < LIM-1 && (c = getchar()) != '\n' && c != EOF; ++i)
     *     s[i] = c;
     */

    i = 0;

    while (i < LIM - 1) {
        c = getchar();
        
        if (c == EOF)
            break;
        if (c == '\n')
            break;
            
        s[i] = c;
        i++;
    }

    s[i] = '\0';
    
    printf("You entered: %s\n", s);

    return 0;
}