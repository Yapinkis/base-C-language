#include <stdio.h>

int recurs_power(int n, int p) {
    if (p == 0) {
        return 1;
    }

    return n * recurs_power(n, p - 1);
}

int main(void) {
    int n, p;

    if (scanf("%d %d", &n, &p) == 2) {
        printf("%d\n", recurs_power(n, p));
    }

    return 0;
}
