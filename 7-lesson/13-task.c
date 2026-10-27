#include <stdio.h>

void print_factors(int n, int d) {
    if (n <= 1) {
        return;
    }

    if (n % d == 0) {
        printf("%d ", d);
        print_factors(n / d, d);
    } else {
        print_factors(n, d + 1);
    }
}

int main(void) {
    int n;

    if (scanf("%d", &n) == 1) {
        print_factors(n, 2);
        printf("\n");
    }

    return 0;
}
