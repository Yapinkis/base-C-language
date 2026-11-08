#include <stdlib.h>

int count_bigger_abs(int n, int a[]) {
    if (n <= 0) return 0;

    int max_val = a[0];
    for (int i = 1; i < n; i++) {
        if (a[i] > max_val) {
            max_val = a[i];
        }
    }

    int count = 0;
    for (int i = 0; i < n; i++) {
        if (abs(a[i]) > max_val) {
            count++;
        }
    }

    return count;
}
