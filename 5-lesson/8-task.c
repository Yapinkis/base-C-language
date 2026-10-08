#include <stdio.h>

int main(void)
{
    int number;
    int count = 0;

    if (scanf("%d", &number) != 1) {
        return 1;
    }

    if (number < 0) {
        number = -number;
    }

    while (number != 0) {
        int digit = number % 10;

        if (digit == 9) {
            count++;
        }

        number /= 10;
    }

    printf("%s\n", count == 1 ? "YES" : "NO");

    return 0;
}