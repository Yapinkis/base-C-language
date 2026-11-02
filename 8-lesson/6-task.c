#include <stdio.h>

int main() {
    int num;
    int sum = 0;

    for (int i = 0; i < 12; i++) {
        scanf("%d", &num);
        sum += num;
    }

    double average = (double)sum / 12;

    printf("%.2f\n", average);

    return 0;
}
