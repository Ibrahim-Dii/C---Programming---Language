#include <stdio.h>

#define CHARS 128

main()
{
    int c;
    int freq[CHARS] = {0};
    
    while ((c = getchar()) != EOF) {
        if (c < CHARS)
            freq[c]++;
    }
    
    printf("Character Frequency Histogram:\n");
    for (int i = 32; i < CHARS; i++) {
        if (freq[i] > 0) {
            if (i == ' ') printf("' ': ");
            else if (i == '\t') printf("\\t : ");
            else if (i == '\n') printf("\\n : ");
            else printf("%c  : ", i);
            
            for (int j = 0; j < freq[i]; j++)
                putchar('*');
            putchar('\n');
        }
    }
}