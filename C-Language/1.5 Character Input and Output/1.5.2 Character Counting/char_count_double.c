#include <stdio.h>

/* count characters using double precision */

main()
{
    double nc;
    
    nc = 0;
    while (getchar() != EOF)
        ++nc;
    printf("Character count: %.0f\n", nc);
}