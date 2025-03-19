#include <stdio.h>

void print_title_and_commands (void);
int get_cmd (void);
void print_commands(void);
float ask_debit_and_minus (float balance);
float ask_credit_and_plus (float balance);
void print_balance(float balance);

int main(void) {

    int cmd;
    float balance = 0.0f;
    print_title_and_commands();

    for(;;) {
        cmd = get_cmd();
        switch (cmd)
        {
            case 0: balance = 0.0f; break;
            case 1: balance = ask_credit_and_plus(balance); break;
            case 2: balance = ask_debit_and_minus(balance); break;
            case 3: print_balance(balance); break;
            case 4: return 0; break;
            default: print_commands(); break;
        }
    }



    return 0;
}











void print_commands(void) {
    printf("Commands: 0 = clear, 1 = credit, 2 = debit, 3 = balance, 4 = exit\n\n");
}

void print_title_and_commands (void) {
    printf("\n\n");
    printf("*** MEOWVELOPER checkbook-balancing program *** \n");
    print_commands();
}

int get_cmd (void) {
    int cmd;
    printf("Enter command: ");
    scanf("%d", &cmd);
    return cmd;
}

float ask_debit_and_minus (float balance) {
    float debit; 
    printf("Enter debit amount: ");
    scanf("%f", &debit); 
    return balance - debit;
}

float ask_credit_and_plus (float balance) {
    float credit; 
    printf("Enter credit amount: ");
    scanf("%f", &credit); 
    return balance + credit;
}

void print_balance(float balance) {
    printf("Current balance is $%.2f\n", balance);
}