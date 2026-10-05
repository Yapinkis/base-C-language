#include <stdio.h>

int main(void) {
    int a,b,c;
    if (scanf("%d %d %d", &a, &b, &c) != 3) {
        return 1;
    }
    if (a < b && b < c) {
        printf("YES\n");
    } else {
        printf("NO\n");
    }
    return 0;
}