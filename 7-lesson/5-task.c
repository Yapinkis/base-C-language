#include <stdio.h>

void print_binary (int num) {
    if (num >= 2) {
        print_binary(num / 2);
    }

    printf("%u", num % 2);
}

int main(void) {
    int num;

    if (scanf("%u", &num) != 1) {
        return 1;
    }

    print_binary(num);

    return 0;
}