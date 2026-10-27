#include <stdio.h>

int counter_num(int a) {

    if (a ==0) {
        return 0;
    }
    return (a % 2) + counter_num(a/2);
}

int main () {
    int n;

    if (scanf("%d",&n) ==1 ) {
        printf("%d\n", counter_num(n));
    }

    return 0;
}