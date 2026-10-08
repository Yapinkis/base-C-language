#include <stdio.h>

int main(void) {
    int a, b, sum = 0;

    if (scanf("%d %d", &a, &b) != 2 || a > b || a > 100 || b > 100 ) {
        return 1;
    }

    for (int i = a; i <= b; i++) {
        sum += i * i;
    }
    printf("%d\n", sum);
    return 0;
}