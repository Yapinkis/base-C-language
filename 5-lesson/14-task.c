#include <stdio.h>

int main(void)
{
    int number;
    int count = 0;

    while (scanf("%d", &number) == 1 && number != 0) {
        count++;
    }

    printf("%d\n", count);

    return 0;
}