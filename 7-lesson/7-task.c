#include <stdio.h>

void num_collector(int num) {
    if (num < 1) {
        return;
    }

    printf("%d ", num);

    num_collector(num - 1);
}

int main () {
    int number;

    if (scanf("%d", &number) == 1) {
        num_collector(number);
    }

    return 0;
}