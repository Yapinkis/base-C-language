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

    int prev = number % 10;
    number /= 10;

    int increasing = 1;

    while (number != 0) {
        int current = number % 10;

        if (current >= prev) {
            increasing = 0;
            break;
        }

        prev = current;
        number /= 10;
    }

    printf("%s\n", increasing ? "YES" : "NO");

    return 0;
}