#include <stdio.h>

int main(void) {
    int num, sum = 0;
    if (scanf("%d", &num) != 1) {
        return 1;
    }

    while (num != 0) {
        sum += num % 10;
        num = num / 10;
    }

    printf("%d\n", sum);
    return 0;
}