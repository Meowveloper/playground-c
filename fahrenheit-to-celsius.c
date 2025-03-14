/*
a program that converts fahrenheit to celsius
*/
#include <stdio.h>
#define FREEZING_POINT 32.0f
#define SCALE_FACTOR (5.0f / 9.0f)


int main(void) {

    float fahrenheit, celsius;

    printf("Enter a fahrenheit temperature: ");
    scanf("%f", &fahrenheit);

    celsius = (fahrenheit - FREEZING_POINT) * SCALE_FACTOR;

    printf("Celsius equivalent of %.2f fahrenheit is : %.2f celsius.\n", fahrenheit, celsius);
    
    return 0;
}