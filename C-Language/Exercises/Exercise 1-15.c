#include <stdio.h>

float fahr_to_celsius(float fahr)
{
    return (5.0/9.0) * (fahr - 32.0);
}

main()
{
    float fahr;
    int lower = 0, upper = 300, step = 20;
    
    printf("Fahrenheit\tCelsius\n");
    printf("-------------------\n");
    
    for (fahr = lower; fahr <= upper; fahr += step) {
        printf("%10.0f\t%7.1f\n", fahr, fahr_to_celsius(fahr));
    }
}