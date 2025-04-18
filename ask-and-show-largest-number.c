#include <stdio.h>
int prompt_and_get_number(void);

int main (void) {

    int largest = 0;
    int num = 0;

    do {
       num = prompt_and_get_number();
       if(num > largest) largest = num;
    } while (num > 0);

    printf("Largest number is: %d.\n", largest);

    return 0;
}


int prompt_and_get_number (void) {
    int num;
    printf("Enter a integer: ");
    scanf("%d", &num);
    return num;
}