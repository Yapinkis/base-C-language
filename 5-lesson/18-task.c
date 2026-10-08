#include <stdio.h>

int main(void)
{
    int n;

    if (scanf("%d", &n) != 1 || n <= 0) {
        return 1;
    }

    int first = 1;
    int second = 1;

    for (int i = 0; i < n; i++) {
        printf("%d", first);

        if (i < n - 1) {
            printf(" ");
        }

        int next = first + second;
        first = second;
        second = next;
    }

    return 0;
}