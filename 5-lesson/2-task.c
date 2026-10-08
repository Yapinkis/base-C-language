#include <stdio.h>

int main (void) {
    int a, b;

    if (scanf("%d %d", &a, &b) != 2 || a > b) {
        return 1;
    }

    for (int i = a; i <= b; i++) {
        printf("%d ", i * i);
    }
    return 0;
}