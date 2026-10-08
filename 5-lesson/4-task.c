#include <stdio.h>

int main(void) {
    int number, count = 0;

    if (scanf("%d", &number) != 1) {
        return 1;
    }

    while (number != 0) {
        number /= 10;
        count++;
    }

    printf("%s\n", count == 3 ? "YES" : "NO");

    return 0;
}