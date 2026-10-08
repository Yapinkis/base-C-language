#include <stdio.h>

int main(void)
{
    int number;
    int all_even = 1;

    if (scanf("%d", &number) != 1) {
        return 1;
    }

    if (number < 0) {
        number = -number;
    }

    while (number != 0) {
        int digit = number % 10;

        if (digit % 2 != 0) {
            all_even = 0;
            break;
        }

        number /= 10;
    }

    printf("%s\n", all_even ? "YES" : "NO");

    return 0;
}