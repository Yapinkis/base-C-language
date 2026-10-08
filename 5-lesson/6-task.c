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

    int found = 0;

    while (number != 0) {
        int current = number % 10;

        if (current == prev) {
            found = 1;
            break;
        }

        prev = current;
        number /= 10;
    }

    printf("%s\n", found ? "YES" : "NO");

    return 0;
}