#include <stdio.h>

int main (void) {
    int num;
    printf("Enter a non-negative integer: ");
    scanf("%d", &num); 

    int result = 0;
    do {
        num /= 10;
        result++;
    } while( num > 0 );
    printf("The integer has %d digits.\n", result);


    return 0;
}