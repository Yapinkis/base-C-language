#include <stdio.h>

int main(void) {
    int value;
    int min;

    if (scanf("%d", &min) != 1) {
        return 1;
    }

    for (int i = 1; i < 5; i++) {
        if (scanf("%d", &value) != 1) {
            return 1;
        }

        if (value < min) {
            min = value;
        }
    }

    printf("%d\n", min);
    return 0;
}