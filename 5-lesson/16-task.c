#include <stdio.h>

int main(void)
{
    int a, b;

    if (scanf("%d %d", &a, &b) != 2) {
        return 1;
    }

    while (b != 0) {
        int remainder = a % b;

        a = b;
        b = remainder;
    }

    printf("%d\n", a);

    return 0;
}