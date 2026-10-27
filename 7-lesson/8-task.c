#include <stdio.h>

void directed_recursion(int a, int b) {

    printf("%d ", a);

    if (a == b) {
        return;
    }

    if (a < b) {
        directed_recursion(a + 1, b);
    } else {
        directed_recursion(a - 1, b);
    }
}


int main() {
    int a, b;

    if (scanf("%d %d", &a, &b) == 2) {
        directed_recursion(a,b);
    }
    return 0;
}