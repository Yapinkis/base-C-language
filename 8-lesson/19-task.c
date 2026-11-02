#include <stdio.h>

int main() {
    long long n;
    int digits[20];
    int count = 0;

    if (scanf("%lld", &n) != 1) {
        return 0;
    }

    if (n == 0) {
        printf("0\n");
        return 0;
    }

    while (n > 0) {
        digits[count] = n % 10;
        count++;
        n /= 10;
    }

    for (int i = count - 1; i >= 0; i--) {
        printf("%d ", digits[i]);
    }
    printf("\n");

    return 0;
}