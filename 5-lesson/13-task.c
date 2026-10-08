#include <stdio.h>

int main(void)
{
    int number;
    int even = 0;
    int odd = 0;

    if (scanf("%d", &number) != 1) {
        return 1;
    }

    while (number != 0) {
        int digit = number % 10;

        if (digit % 2 == 0) {
            even++;
        } else {
            odd++;
        }

        number /= 10;
    }

    printf("%d %d\n", even, odd);

    return 0;
}