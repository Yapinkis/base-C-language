#include <stdio.h>
#include <stdlib.h>

int get_even_digits_product(int num) {
    num = abs(num);
    int product = 1;
    int has_even = 0;

    if (num == 0) return 0;

    while (num > 0) {
        int digit = num % 10;
        if (digit % 2 == 0) {
            product *= digit;
            has_even = 1;
        }
        num /= 10;
    }

    return has_even ? product : 0;
}

int get_odd_digits_product(int num) {
    num = abs(num);
    int product = 1;
    int has_odd = 0;

    while (num > 0) {
        int digit = num % 10;
        if (digit % 2 != 0) {
            product *= digit;
            has_odd = 1;
        }
        num /= 10;
    }

    return has_odd ? product : 0;
}

int main() {
    int arr[10];
    int even_count = 0;
    int odd_count = 0;

    for (int i = 0; i < 10; i++) {
        if (scanf("%d", &arr[i]) != 1) return 0;
        if (arr[i] % 2 == 0) {
            even_count++;
        } else {
            odd_count++;
        }
    }

    if (even_count > odd_count) {
        for (int i = 0; i < 10; i++) {
            if (arr[i] % 2 != 0) {
                arr[i] = get_odd_digits_product(arr[i]);
            }
        }
    } else {
        for (int i = 0; i < 10; i++) {
            if (arr[i] % 2 == 0) {
                arr[i] = get_even_digits_product(arr[i]);
            }
        }
    }

    for (int i = 0; i < 10; i++) {
        printf("%d%s", arr[i], (i == 9) ? "" : " ");
    }
    printf("\n");

    return 0;
}
