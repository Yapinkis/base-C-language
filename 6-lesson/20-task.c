#include <stdio.h>

int check_brackets(void) {
    int balance = 0;
    int c;

    while ((c = getchar()) != EOF && c != '.') {

        if (c == '(') {
            balance++;
        } else if (c == ')') {
            balance--;
        }

        if (balance < 0) {
            return 0;
        }
    }

    return balance == 0;
}

int main(void) {
    if (check_brackets()) {
        printf("YES\n");
    } else {
        printf("NO\n");
    }

    return 0;
}