#include <stdio.h>

/*Temperature Table with Heading*/

main()
{
    float fahr, celsius;
    int lower = 0, upper = 300, step = 20;
    
    printf("Fahrenheit\tCelsius\n");
    printf("-------------------\n");
    
    fahr = lower;
    while (fahr <= upper) {
        celsius = (5.0/9.0) * (fahr - 32.0);
        printf("%10.0f\t%7.1f\n", fahr, celsius);
        fahr += step;
    }
}