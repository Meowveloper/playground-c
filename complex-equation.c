/*
    a program that displays the value of 
    3(5 power of x) + 2(4 power of x) - 5(3 power of x) - (2 power of x) + 7x - 6
*/

#include <stdio.h>

float float_power(float num, int power);

int main (void) {
    float x;
    printf("Enter x: ");
    scanf("%f", &x); 

    float result = (3 * float_power(x, 5)) + (2 * float_power(x, 4)) - (5 * float_power(x, 3)) - float_power(x, 2) + (7 * x) - 6;
    printf("The result is : %.2f\n", result);

    return 0;
}


float float_power(float num, int power) {
    float result = 1.0f;
    for(int i = 0; i < power; i++) {
        result *= num;
    }
    return result;
}