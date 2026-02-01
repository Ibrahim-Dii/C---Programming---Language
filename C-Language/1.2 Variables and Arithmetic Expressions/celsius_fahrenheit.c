#include <stdio.h>

/* print Celsius-Fahrenheit table
   for celsius = 0, 20, ..., 300 */

main()
{
    float celsius, fahr;
    float lower, upper, step;
    
    lower = 0;      /* lower limit */
    upper = 300;    /* upper limit */
    step = 20;      /* step size */
    
    celsius = lower;
    printf("Celsius\tFahrenheit\n");
    printf("-------------------\n");
    
    while (celsius <= upper) {
        fahr = (celsius * 9.0/5.0) + 32.0;
        printf("%6.1f\t%10.1f\n", celsius, fahr);
        celsius = celsius + step;
    }
}