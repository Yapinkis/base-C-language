#include <stdio.h>

int main() {
    int arr[5];

    scanf("%d", &arr[0]);

    int min = arr[0];

    for (int i = 1; i < 5; i++) {
        scanf("%d", &arr[i]);
        if (arr[i] < min) {
            min = arr[i];
        }
    }

    printf("%d\n", min);

    return 0;
}