#include <stdio.h>

int main() {
    int arr[10];

    for (int i = 0; i < 10; i++) {
        scanf("%d", &arr[i]);
    }

    int max_val = arr[0];
    int max_num = 1;

    int min_val = arr[0];
    int min_num = 1;

    for (int i = 1; i < 10; i++) {
        if (arr[i] > max_val) {
            max_val = arr[i];
            max_num = i + 1;
        }
        if (arr[i] < min_val) {
            min_val = arr[i];
            min_num = i + 1;
        }
    }

    printf("%d %d %d %d\n", max_num, max_val, min_num, min_val);

    return 0;
}
