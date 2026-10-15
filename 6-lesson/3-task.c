#include <stdio.h>

int middle(int a, int b) {
    return (a + b) / 2;
}

int main() {
    int a, b;
    if (scanf("%d %d", &a, &b) != 2) {
        return 1;
    }
    printf("%d", middle(a, b));
    return 0;
}