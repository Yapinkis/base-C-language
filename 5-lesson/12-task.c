#include <stdio.h>

int main(void)
{
    int number;

    if (scanf("%d", &number) != 1) {
        return 1;
    }

    int digit = number % 10;

    int min = digit;
    int max = digit;

    number /= 10;

    while (number != 0) {
        digit = number % 10;

        if (digit < min) {
            min = digit;
        }

        if (digit > max) {
            max = digit;
        }

        number /= 10;
    }

    printf("%d %d\n", min, max);

    return 0;
}