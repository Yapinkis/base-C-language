#include <stdio.h>

int main() {
    int arr[12];
    int result[12];

    for (int i = 0; i < 12; i++) {
        scanf("%d", &arr[i]);
    }

    for (int i = 0; i < 12; i++) {
        int new_index = (i + 4) % 12;
        result[new_index] = arr[i];
    }

    for (int i = 0; i < 12; i++) {
        printf("%d ", result[i]);
    }
    printf("\n");

    return 0;
}
