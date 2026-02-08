#include <stdio.h>
/*Word Length Histogram (Horizontal)*/

#define MAXLEN 20
#define IN     1
#define OUT    0

main()
{
    int c, len = 0, state = OUT;
    int lengths[MAXLEN] = {0};
    
    while ((c = getchar()) != EOF) {
        if (c == ' ' || c == '\n' || c == '\t') {
            if (state == IN) {
                if (len < MAXLEN) lengths[len]++;
                else lengths[MAXLEN-1]++;
                len = 0;
            }
            state = OUT;
        }
        else {
            len++;
            state = IN;
        }
    }
    
    // Handle last word if file doesn't end with whitespace
    if (state == IN) {
        if (len < MAXLEN) lengths[len]++;
        else lengths[MAXLEN-1]++;
    }
    
    printf("Word Length Histogram:\n");
    for (int i = 1; i < MAXLEN; i++) {
        printf("%2d: ", i);
        for (int j = 0; j < lengths[i]; j++)
            putchar('*');
        putchar('\n');
    }
    if (lengths[MAXLEN-1] > 0) {
        printf("%2d+: ", MAXLEN-1);
        for (int j = 0; j < lengths[MAXLEN-1]; j++)
            putchar('*');
        putchar('\n');
    }
}