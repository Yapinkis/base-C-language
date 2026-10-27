#include <stdio.h>

void print_sequence(int n, int current_num, int count) {
    if (n <= 0) {
        return;
    }

    printf("%d ", current_num);

    if (count + 1 == current_num) {
        print_sequence(n - 1, current_num + 1, 0);
    } else {
        print_sequence(n - 1, current_num, count + 1);
    }
}

int main(void) {
    int n;

    if (scanf("%d", &n) == 1) {
        print_sequence(n, 1, 0);
    }

    return 0;
}
