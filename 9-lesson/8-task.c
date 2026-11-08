#include <stdio.h>

int main() {
    int num;
    int min = 1001;
    int max = 0;
    int real_sum = 0;

    while (scanf("%d", &num) == 1 && num != 0) {
        real_sum += num;

        if (num < min) min = num;
        if (num > max) max = num;
    }

    int count = max - min + 1;

    int ideal_sum = (min + max) * count / 2;

    int missing_number = ideal_sum - real_sum;

    printf("%d\n", missing_number);

    return 0;
}
