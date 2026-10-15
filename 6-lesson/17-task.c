#include <stdio.h>

int is_happy_number(int n) {
    int sum = 0;
    int product = 1;

    do {
        int digit = n % 10;

        sum += digit;
        product *= digit;

        n /= 10;
    } while (n > 0);

    return sum == product;
}

int main(void) {
    int n;

    if (scanf("%d", &n) != 1 || n < 0) {
        return 1;
    }

    if (is_happy_number(n)) {
        printf("YES\n");
    } else {
        printf("NO\n");
    }

    return 0;
}