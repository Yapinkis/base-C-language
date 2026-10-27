#include <stdio.h>

void print_odds(void) {
    int n;

    if (scanf("%d", &n) != 1) {
        return;
    }

    if (n == 0) {
        return;
    }

    if (n % 2 != 0) {
        printf("%d ", n);
    }
    
    print_odds();
}

int main(void) {
    print_odds();
    return 0;
}
