#include <stdio.h>

int main(void)
{
    int number;
    int reverse = 0;

    if (scanf("%d", &number) != 1) {
        return 1;
    }

    while (number != 0) {
        int digit = number % 10;

        reverse = reverse * 10 + digit;

        number /= 10;
    }

    printf("%d\n", reverse);

    return 0;
}