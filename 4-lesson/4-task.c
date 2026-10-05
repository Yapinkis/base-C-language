#include <stdio.h>

int main(void) {
    int value;
    int max;

    if (scanf("%d", &max) != 1) {
        return 1;
    }

    for (int i = 1; i < 5; i++) {
        if (scanf("%d", &value) != 1) {
            return 1;
        }

        if (value > max) {
            max = value;
        }
    }

    printf("%d\n", max);
    return 0;
}