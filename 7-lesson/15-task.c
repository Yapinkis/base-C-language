#include <stdio.h>

int max_find(int max) {
    int n;

    if (scanf("%d", &n) != 1) {
        return max;
    }

    if (n == 0) {
        return max;
    }

    if (n > max) {
        max = n;
    }

    return max_find(max);
}

int main(void) {
    int first_num;

    if (scanf("%d", &first_num) == 1 && first_num != 0) {
        printf("%d\n", max_find(first_num));
    }

    return 0;
}
