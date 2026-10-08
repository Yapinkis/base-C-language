#include <stdio.h>

int main(void)
{
    int n;

    if (scanf("%d", &n) != 1 || n <= 10) {
        return 1;
    }

    for (int i = 10; i <= n; i++) {
        int temp = i;
        int sum = 0;
        int product = 1;

        while (temp != 0) {
            int digit = temp % 10;

            sum += digit;
            product *= digit;

            temp /= 10;
        }

        if (sum == product) {
            printf("%d ", i);
        }
    }

    return 0;
}