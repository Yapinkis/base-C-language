#include <stdio.h>

int main() {
    int pos_arr[10];
    int neg_arr[10];

    int pos_count = 0;
    int neg_count = 0;

    int num;

    for (int i = 0; i < 10; i++) {
        scanf("%d", &num);

        if (num > 0) {
            pos_arr[pos_count] = num;
            pos_count++;
        } else if (num < 0) {
            neg_arr[neg_count] = num;
            neg_count++;
        }
    }

    for (int i = 0; i < pos_count; i++) {
        printf("%d ", pos_arr[i]);
    }

    for (int i = 0; i < neg_count; i++) {
        printf("%d ", neg_arr[i]);
    }

    printf("\n");

    return 0;
}
