#include <stdio.h>

int main(void) {

    int first, second;

    if (scanf("%d %d", &first, &second) != 2) {
        return 1;
    }

    first > second ? printf("%d %d\n", second,first) : printf("%d %d\n", first,second);

    return 0;
}