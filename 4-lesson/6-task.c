#include <stdio.h>

int main(void) {
    int value, min, max;

    if (scanf("%d", &value) != 1) {
        return 1;
    }

    min = value;
    max = value;

    for (int i = 1; i < 5; i++) {
        if (scanf("%d", &value) != 1) {
            return 1;
        }

        if (value < min) {
            min = value;
        }

        if (value > max) {
            max = value;
        }
    }

    printf("%d\n", min + max);
    return 0;
}