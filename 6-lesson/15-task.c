#include <stdio.h>

int grow_up(int n) {
    while (n >= 10) {
        int right = n % 10;
        int left = (n / 10) % 10;

        if (left >= right) {
            return 0;
        }

        n /= 10;
    }

    return 1;
}

int main(void) {
    int n;

    if (scanf("%d", &n) != 1 || n < 0) {
        return 1;
    }

    if (grow_up(n)) {
        printf("YES\n");
    } else {
        printf("NO\n");
    }

    return 0;
}