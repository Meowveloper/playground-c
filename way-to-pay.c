/*
    a program that asks the user to enter a U.S dollar amount and then shows how to pay that amount using the smallest number of 
    $20, $10, $5 and $1 bills
*/

#include <stdio.h>
int cal(int total, int bill);

int main (void) {

    int bill;
    printf("Enter your bill(integer): ");
    scanf("%d", &bill);

    printf("\n\nYou can pay your $%d with:\n", bill);
    bill = cal(bill, 20);
    bill = cal(bill, 10);
    bill = cal(bill, 5);
    bill = cal(bill, 1);
    printf("\n\n");

    return 0;
}

int cal(int total, int bill) {
    printf("%d bills of $%d,\n", (total / bill), bill);
    return total % bill;
}

