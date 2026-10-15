#include <stdio.h>

long long convert(int n, int p) {
    long long result = 0;
    long long position = 1;

    while (n > 0) {
        int remainder = n % p;

        result += remainder * position;

        n /= p;
        position *= 10;
    }

    return result;
}

int main(void) {
    int n, p;

    if (scanf("%d %d", &n, &p) != 2) {
        return 1;
    }

    if (n < 0 || p < 2 || p > 9) {
        return 1;
    }

    printf("%lld\n", convert(n, p));

    return 0;
}