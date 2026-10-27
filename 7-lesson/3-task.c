#include <stdio.h>

void recursive_func(int num) {
    printf("%u ", num % 10);

    if (num < 10) return;

    recursive_func(num / 10);
}

int main (void) {
    int num;
    if (scanf("%d", &num) != 1) {
        return 1;
    }
    recursive_func(num);
}