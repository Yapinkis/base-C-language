#include <stdio.h>

void print_simple(int n) {
    for (int i = 2; i <= n / i; i++) {
        while (n % i == 0) {
            printf("%d ", i);
            n /= i;
        }
    }

    if (n > 1) {
        printf("%d", n);
    }

    printf("\n");
}

int main(void) {
    int n;

    if (scanf("%d", &n) != 1 || n <= 0) {
        return 1;
    }

    print_simple(n);

    return 0;
}