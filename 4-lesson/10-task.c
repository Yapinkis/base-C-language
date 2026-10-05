#include <stdio.h>

int main(void) {
    int month;

    if (scanf("%d", &month) != 1) {
        return 1;
    }

    if (month < 1 || month > 12) {
        return 1;
    }

    if (month == 12 || month <= 2) {
        puts("winter");
    } else if (month <= 5) {
        puts("spring");
    } else if (month <= 8) {
        puts("summer");
    } else {
        puts("autumn");
    }

    return 0;
}