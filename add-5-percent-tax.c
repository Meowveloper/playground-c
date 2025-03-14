/*
    a program that add 5% tax to the amount
*/



#include <stdio.h>

#define PERCENT_MULTIPLIER (5.0f / 100.0f)

int main (void) {

    float amount;
    printf("Enter your amount: ");
    scanf("%f", &amount);

    float result = amount + (amount * PERCENT_MULTIPLIER);

    printf("With tax added: $%.2f\n", result);

    return 0;
}