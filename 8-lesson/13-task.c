#include <stdio.h>

int main() {
    int num;

    for (int i = 0; i < 10; i++) {
        scanf("%d", &num);

        if ((abs(num) / 10) % 10 == 0) {
            printf("%d ", num);
        }
    }
    printf("\n");

    return 0;
}
