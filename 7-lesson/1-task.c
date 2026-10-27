#include <stdio.h>

void recursion_func(int num) {
    if (num == 0) {
        return;
    }

    recursion_func(num - 1);

    printf("%d ", num);
}


int main() {
    int num;
    if (scanf("%d", &num) != 1) {
        return 1;
    }
    recursion_func(num);

    return 0;
}
