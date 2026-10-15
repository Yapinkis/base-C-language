#include <stdio.h>

int num_pow(int num,int pow) {
    int result = 1;
    for (int i=0;i<pow;i++) {
        result *= num;
    }
    return result;
}

int main() {
    int num, pow;
    if (scanf("%d %d", &num, &pow) != 2) {
        return 1;
    }
    printf("%d\n", num_pow(num,pow));
    return 0;
}