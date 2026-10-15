#include <stdio.h>

int f(int x) {
    if (x < -2) {
        return 4;
    }

    if (x < 2) {
        return x * x;
    }

    return x * x + 4 * x + 5;
}

int main () {
    int x;
    int max;
    int result;

    if (scanf("%d", &x) != 1 || x == 0) {
        return 1;
    }

    max = f(x);

    while (scanf("%d", &x) == 1 && x != 0) {
        result = f(x);

        if (result > max) {
            max = result;
        }
    }

    printf("%d\n", max);

    return 0;
}
