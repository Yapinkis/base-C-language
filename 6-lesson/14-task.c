#include <stdio.h>
#include <stdbool.h>

bool is_even_sum(int number) {
    int sum = 0;

    while (number > 0) {
        sum += number % 10;
        number /= 10;
    }

    return sum % 2 == 0;
}

int main(void) {
    int number;

    if (scanf("%d", &number) != 1 || number < 0) {
        return 1;
    }

    if (is_even_sum(number)) {
        printf("YES\n");
    } else {
        printf("NO\n");
    }

    return 0;
}