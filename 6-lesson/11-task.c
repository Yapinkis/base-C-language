#include <stdio.h>


int nod(int a, int b) {
    while (b != 0) {
        int remainder = a % b;

        a = b;
        b = remainder;
    }

    return a;
}

int main(void) {
    int a, b;

    if (scanf("%d %d", &a, &b) != 2 || a <= 0 || b <= 0) {
        return 1;
    }

    printf("%d\n", nod(a, b));

    return 0;
}
