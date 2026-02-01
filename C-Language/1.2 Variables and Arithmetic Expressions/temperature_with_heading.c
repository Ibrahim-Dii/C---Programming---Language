#include <stdio.h>

/* print Fahrenheit-Celsius table with heading */

main()
{
    float fahr, celsius;
    float lower, upper, step;
    
    lower = 0;      /* lower limit */
    upper = 300;    /* upper limit */
    step = 20;      /* step size */
    
    /* Print table heading */
    printf("Fahrenheit\tCelsius\n");
    printf("-----------------------\n");
    
    fahr = lower;
    while (fahr <= upper) {
        celsius = (5.0/9.0) * (fahr-32.0);
        printf("%10.0f\t%7.1f\n", fahr, celsius);
        fahr = fahr + step;
    }
}