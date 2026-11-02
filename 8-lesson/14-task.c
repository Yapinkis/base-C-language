#include <stdio.h>

int main() {
    int arr[10];
    int result[10];
    int count = 0;

    for (int i = 0; i < 10; i++) {
        scanf("%d", &arr[i]);
    }

    for (int i = 0; i < 10; i++) {
        int already_added = 0;
        for (int k = 0; k < count; k++) {
            if (result[k] == arr[i]) {
                already_added = 1;
                break;
            }
        }

        if (already_added) {
            continue;
        }

        int t_count = 0;
        for (int j = 0; j < 10; j++) {
            if (arr[j] == arr[i]) {
                t_count++;
            }
        }

        if (t_count > 1) {
            result[count] = arr[i];
            count++;
        }
    }

    for (int i = 0; i < count; i++) {
        printf("%d ", result[i]);
    }
    printf("\n");

    return 0;
}
