#include <stdio.h>

int main(void) {
    int number;

    if (scanf("%d", &number) != 1) {
        return 1;
    }

    int hundreds = number / 100;
    int tens = (number / 10) % 10;
    int units = number % 10;

    int sum = hundreds + tens + units;

    printf("%d\n", sum);

    return 0;
}