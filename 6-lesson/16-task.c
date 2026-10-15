#include <stdio.h>

int is_prime(int n) {
    if (n < 2) {
        return 0;
    }

    for (int i = 2; i <= n / i; i++) {
        if (n % i == 0) {
            return 0;
        }
    }

    return 1;
}

int main(void) {
    int n;

    if (scanf("%d", &n) != 1 || n < 0) {
        return 1;
    }

    if (is_prime(n)) {
        printf("YES\n");
    } else {
        printf("NO\n");
    }

    return 0;
}