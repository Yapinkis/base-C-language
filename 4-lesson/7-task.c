#include <stdio.h>

int main(void) {
    int value;
    int max = 0;

    if (scanf("%d", &value) != 1) {
        return 1;
    }

    while (value > 0) {
        int number = value % 10;
        max = max < number ? number : max;
        value /= 10;
    }
    printf("%d\n", max);
}