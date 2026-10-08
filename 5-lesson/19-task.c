#include <stdio.h>

int main(void)
{
    int number;
    int sum = 0;

    if (scanf("%d", &number) != 1) {
        return 1;
    }

    while (number != 0) {
        int digit = number % 10;

        sum += digit;

        number /= 10;
    }

    printf("%s\n", sum == 10 ? "YES" : "NO");

    return 0;
}