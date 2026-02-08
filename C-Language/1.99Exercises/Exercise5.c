#include <stdio.h>
/* Print Fahrenheit-Celsius table
   for fahr = 300, 280, ..., 0 */

main()
{
    int fahr;
    
    printf("Fahrenheit\tCelsius\n");
    printf("-------------------\n");
    
    for (fahr = 300; fahr >= 0; fahr -= 20) {
        printf("%10d\t%7.1f\n", fahr, (5.0/9.0)*(fahr-32));
    }
}