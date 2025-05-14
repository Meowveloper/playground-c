#include <stdio.h>
#include <stdbool.h>

void reverse_a_series_of_numbers(void);
void designated_array_initializers(void);
void check_a_number_for_repeated_digits(void);
void compute_interest_rate(void);

int main(void) {
    // reverse_a_series_of_numbers();
    // check_a_number_for_repeated_digits();
    compute_interest_rate();
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
    /*  prints a table of compound interest */
    #define NUM_RATES ((int) (sizeof(value) / sizeof(value[0])))
    #define INITIAL_BALANCE 100.00

    int low_rate, num_years;

    double value[5];

    printf("Enter interest rate: ");
    scanf("%d", &low_rate);
    printf("Enter number of the years: ");
    scanf("%d", &num_years);

    printf("\nYears");
    for(int i = 0; i < NUM_RATES; i++) {
        printf("%6d%%", low_rate + i);
        value[i] = INITIAL_BALANCE;
    }
    printf("\n");

    for(int year = 1; year <= num_years; year++) {
        printf("%3d    ", year);
        for(int i = 0; i < NUM_RATES; i++) {
            value[i] += (low_rate + i) / 100.0 * value[i];
            printf("%7.2f", value[i]);
        }
        printf("\n");
    }
}

void designated_array_initializers(void) {
    int a[15] = { [2] = 29, [9] = 7, [14] = 48 };
}