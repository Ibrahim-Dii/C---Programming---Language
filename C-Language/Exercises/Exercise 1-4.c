#include <stdio.h>

main()
{
    float celsius, fahr;
    int lower = 0, upper = 300, step = 20;
    
    celsius = lower;
    printf("Celsius\tFahrenheit\n");
    printf("-------------------\n");
    
    while (celsius <= upper) {
        fahr = (celsius * 9.0/5.0) + 32.0;
        printf("%6.1f\t%10.1f\n", celsius, fahr);
        celsius += step;
    }
}