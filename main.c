#include <stdio.h>

/*
name : playground.c
purpose : to practice C programming language
Author: meowveloper(Zwe Khant Aung)
*/

void greet(void);
void guess_game(void);
void str_reverse(char self[]);
int get_str_len(char str[]);
void pun(void);

int main (void) {
    pun();
    str_reverse("hello");
    // greet();
    // guess_game();
    return 0;
}

void str_reverse(char self[]) {
    int length = get_str_len(self);
    int i;
    char c;
    char new_str[length + 1];
    new_str[length + 1] = '\0';
    for(i = 0; c = self[i]; i++) {
        new_str[length - (i + 1)] = c;
    }
    printf("%s\n", new_str);

}

int get_str_len(char str[]) {
    int i;
    for(i = 0; str[i]; i++);
    return i;
}


void pun (void) {
    printf("To C or not to C: that is the question.\n");
}














void greet(void) {
    char name[100];
    printf("Enter your name : ");
    scanf("%[^\n]100s", name);
    // fgets(name, 100, stdin);
    printf("Hello %s!!\n", name);
}


void guess_game(void) {
    int guess;
    printf("type a number: ");
    while(scanf("%d", &guess) != EOF) {
        if(guess == 42) {
            printf("Nice work!!\n");
            break;
        } else if (guess < 42) {
            printf("Too low - guess again!\n");
        } else {
            printf("Too high - guess again!\n");
        }
    }
}


