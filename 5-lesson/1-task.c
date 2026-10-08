#include <stdio.h>

int main(void)
{
    int num;

    if (scanf("%d", &num) != 1 || num > 100 || num < 0)
    {
        return 1;
    }

    for (int i = 1; i <= num; i++)
    {
        printf("%d %d %d\n", i, i * i, i * i * i);
    }

    return 0;
}