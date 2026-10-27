#include <stdio.h>

int recursive_func(int num) {
    if (num == 0) return 0;

    return num + recursive_func(num - 1);
}

int main () {
    int num;
    if (scanf("%d", &num) != 1) {
        return 1;
    }

    printf("%d\n", recursive_func(num));
    return 0;
}