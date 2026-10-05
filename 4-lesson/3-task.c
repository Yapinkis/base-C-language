#include <stdio.h>

int main(void) {
    int first, second, third;

    if (scanf("%d %d %d", &first, &second, &third) != 3) {
        return 1;
    }

    int max = first > second ? first : second;
    max = max > third ? max : third;

    printf("%d\n", max);
    return 0;
}
