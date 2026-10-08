#include <stdio.h>

int main(void)
{
    int number;
    int is_prime = 1;

    if (scanf("%d", &number) != 1) {
        return 1;
    }

    if (number < 2) {
        is_prime = 0;
    } else {
        for (int i = 2; i < number; i++) {
            if (number % i == 0) {
                is_prime = 0;
                break;
            }
        }
    }

    printf("%s\n", is_prime ? "YES" : "NO");

    return 0;
}