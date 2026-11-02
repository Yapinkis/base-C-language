#include <stdio.h>

int main() {
    int n;
    int counts[10] = {0};
    
    if (scanf("%d", &n) != 1) {
        return 0;
    }

    for (int i = 2; i <= n; i++) {
        for (int d = 2; d <= 9; d++) {
            if (i % d == 0) {
                counts[d]++;
            }
        }
    }

    for (int d = 2; d <= 9; d++) {
        printf("%d %d\n", d, counts[d]);
    }

    return 0;
}
