#include <stdio.h>

int main (void) {

    printf("Enter a message: ");
    int i = 0;
    while (getchar() != '\n')
    {
        i++;
    }
    printf("Your message was %d character(s) long.\n", i);
    

    return 0;
}