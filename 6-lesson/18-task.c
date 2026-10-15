#include <stdio.h>

int is_digit(char c) {
    return c >= '0' && c <= '9';
}

int main(void) {
    int c;
    int count = 0;

    while ((c = getchar()) != EOF && c != '.') {
        if (is_digit((char)c)) {
            count++;
        }
    }

    printf("%d\n", count);

    return 0;
}