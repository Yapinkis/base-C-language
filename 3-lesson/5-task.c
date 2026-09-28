#include <stdio.h>

int main(void) {
    int number;

    if (scanf("%d", &number) != 1) {
        return 1;
    }

    int hundreds = number / 100;
    int tens = (number / 10) % 10;
    int units = number % 10;

    int product = hundreds * tens * units;

    printf("%d\n", product);

    return 0;
}