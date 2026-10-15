#include <stdio.h>

int module(int num) {
    if (num < 0) {
        return num * -1;
    }
    return num;
}

int main () {
    int num = 0;
    if (scanf("%d", &num) != 1) {
        return 1;
    }

    printf("%d\n", module(num));
}
