#include <stdio.h>

int main(void)
{
    int number;

    if (scanf("%d", &number) != 1) {
        return 1;
    }

    if (number < 0) {
        number = -number;
    }

    int digits[10] = {0};
    int found = 0;

    while (number != 0) {
        int digit = number % 10;

        digits[digit]++;

        if (digits[digit] > 1) {
            found = 1;
            break;
        }

        number /= 10;
    }

    printf("%s\n", found ? "YES" : "NO");

    return 0;
}