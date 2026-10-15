#include <stdio.h>

unsigned int factorial(unsigned int n) {
    unsigned long long result = 1;

    for (unsigned int i = 2; i <= n; i++) {
        result *= i;
    }

    return result;
}

int main(void) {
    unsigned int n;

    if (scanf("%u", &n) != 1) {
        return 1;
    }

    printf("%u\n", factorial(n));

    return 0;
}