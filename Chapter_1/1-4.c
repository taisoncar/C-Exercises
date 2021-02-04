#include <stdio.h>

/* Celsius to Fahrenheit table */

int main()
{
    float celsius, fahr;
    int lower, upper, step;

    lower = 0;
    upper = 300;
    step = 20;

    fahr = lower;
    printf("%s  %s\n","Celsius","Fahr");     
    while (celsius <= upper) {
        fahr = (celsius * 9.0 / 5.0) + 32;
        printf("%7.0f  %4.0f\n", celsius, fahr);     //removed printing decimal point as all the values are integers
        celsius = celsius + step;
    }
}