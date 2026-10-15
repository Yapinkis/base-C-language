#include <stdio.h>

int func(int number) {
    int sum = 0;
    int temp = 1;

    for (int i = 1; i <= number; i++) {
        sum += temp;
        temp = sum;
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