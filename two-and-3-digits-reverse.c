#include <stdio.h>

void two_digits(void);
void three_digits(void);

int main (void) {

    two_digits();
    three_digits();

    return 0;
}

void two_digits(void) {
    int i;
    printf("Enter a two digit number(integer): ");
    scanf("%d", &i);
    int back = i / 10;
    int front = i % 10;
    printf("The reversal is %d%d\n", front, back);
}

void three_digits(void) {
    int i;
    printf("Enter a three digit number(integer): ");
    scanf("%d", &i);
    int last = i / 100;
    int middle = (i - (last * 100)) / 10;
    int first = i - ((last * 100) + (middle * 10));
    printf("The reversal is %d%d%d\n", first, middle, last);
}