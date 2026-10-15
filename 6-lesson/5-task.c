#include <stdio.h>

int func(int num) {
    int sum = 0;
    for (int i = 1; i <= num; i++) {
        sum += i;
    }
    return sum;
}

int main () {
    int number = 0;

    if (scanf("%d", &number) != 1 || number <= 0) {
        return 1;
    }

    printf("%d\n", func(number));

    return 0;
}