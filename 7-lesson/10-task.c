#include <stdio.h>

int is_prime(int n, int delitel) {
    if (n == 1) {
        return 0;
    }

    if (delitel * delitel > n) {
        return 1;
    }

    if (n % delitel == 0) {
        return 0;
    }

    return is_prime(n, delitel + 1);
}

int main(void) {
    int n;

    if (scanf("%d", &n) == 1) {
        if (is_prime(n, 2) == 1) {
            printf("YES\n");
        } else {
            printf("NO\n");
        }
    }

    return 0;
}
