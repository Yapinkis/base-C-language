#include <stdio.h>

int main(void) {
    int a, b, c;

    if (scanf("%d %d %d", &a, &b, &c) != 3) {
        return 1;
    }

    if (a > 0 && b > 0 && c > 0 &&
        (long long)a + b > c &&
        (long long)a + c > b &&
        (long long)b + c > a) {
        puts("YES");
        } else {
            puts("NO");
        }

    return 0;
}