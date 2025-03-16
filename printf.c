#include <stdio.h>

void integer_and_float (void);
void the_string (void);

int main (void) {
    integer_and_float();
    printf("\n\n");
    the_string();
    
    return 0;
}


void integer_and_float (void) {
    int i;
    float x;

    i = 40;
    x = 839.21f;

    printf("|%d|%5d|%-5d|%5.3d|\n", i, i, i, i);
    printf("|%10.3f|%10.3e|%-10g|\n", x, x, x);
}


void the_string (void) {
    printf("\"Hello!\"\n\n");
    printf("Item\tUnit\tPurchase\nPrice\tDate\n");
}