#include <stdio.h>

float fahrenheit_to_celsius(float fahr);

/* temperature conversion using function */
main()
{
    float fahr;
    int lower, upper, step;
    
    lower = 0;      /* lower limit */
    upper = 300;    /* upper limit */
    step = 20;      /* step size */
    
    printf("Fahrenheit\tCelsius\n");
    printf("-------------------\n");
    
    fahr = lower;
    while (fahr <= upper) {
        printf("%10.0f\t%7.1f\n", fahr, fahrenheit_to_celsius(fahr));
        fahr = fahr + step;
    }
    
    return 0;
}

/* fahrenheit_to_celsius: convert Fahrenheit to Celsius */
float fahrenheit_to_celsius(float fahr)
{
    return (5.0/9.0) * (fahr - 32.0);
}