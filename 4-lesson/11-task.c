#include <stdio.h>

int main(void) {
    int first, second;

    if (scanf("%d %d", &first, &second) != 2) {
        return 1;
    }

    if (first > second) {
        puts("Above");
    } else if (first < second) {
        puts("Less");
    } else {
        puts("Equal");
    }

    return 0;
}