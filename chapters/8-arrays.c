#include <stdio.h>
#include <stdbool.h>

void reverse_a_series_of_numbers(void);
void designated_array_initializers(void);
void check_a_number_for_repeated_digits(void);
void compute_interest_rate(void);

int main(void) {
    // reverse_a_series_of_numbers();
    check_a_number_for_repeated_digits();
    return 0;
}


void reverse_a_series_of_numbers(void) {
    const int Array_Length = 10; 

    int a[Array_Length], i;

    printf("Enter %d numbers: ", Array_Length);
    for(i = 0; i < Array_Length; i++) {
        scanf("%d", &a[i]);
    }

    printf("In reverse order: ");
    for(i = Array_Length - 1; i >= 0; i--) {
        printf(" %d", a[i]);
    }
    printf("\n");
}

void check_a_number_for_repeated_digits(void) {
    bool digit_seen[10] = {false};
    int digit;
    long n;

    printf("Enter a number: ");
    scanf("%ld", &n);

    while (n > 0) {
        digit = n % 10;
        if(digit_seen[digit]) {
            break;
        }
        digit_seen[digit] = true;
        n /= 10;
    }

    if(n > 0) printf ("Repeated digits\n");
    else printf("No repeated digits\n");
}

void compute_interest_rate(void) {
    
}

void designated_array_initializers(void) {
    int a[15] = { [2] = 29, [9] = 7, [14] = 48 };
}