#include <stdio.h>

int main() {
    int arr[10];

    for (int i = 0; i < 10; i++) {
        scanf("%d", &arr[i]);
    }

    for (int i = 0; i < 10; i++) {
        int count = 0;

        for (int j = 0; j < 10; j++) {
            if (arr[j] == arr[i]) {
                count++;
            }
        }

        if (count == 1) {
            printf("%d ", arr[i]);
        }
    }
    printf("\n");

    return 0;
}
