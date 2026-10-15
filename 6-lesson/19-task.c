#include <stdio.h>

int digit_to_num(char c) {
    return c - '0';
}

int main(void) {
    int c;
    int sum = 0;

    while ((c = getchar()) != EOF && c != '.') {
        if (c >= '0' && c <= '9') {
            sum += digit_to_num((char)c);
        }
    }

    printf("%d\n", sum);

    return 0;
}