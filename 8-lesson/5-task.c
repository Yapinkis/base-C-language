#include <stdio.h>

int main() {
    int num;
    int sum = 0;

    for (int i = 0; i < 10; i++) {
        scanf("%d", &num);

        if (num > 0) {
            sum += num;
        }
    }
    printf("%d\n", sum);

    return 0;
}
