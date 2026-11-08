#include <stdio.h>
#include <limits.h>

void find_min_sum_pair(int size, int a[]) {
    long long min_sum = LLONG_MAX;
    int index1 = 0;
    int index2 = 1;

    for (int i = 0; i < size - 1; i++) {
        for (int j = i + 1; j < size; j++) {
            long long current_sum = (long long)a[i] + a[j];

            if (current_sum < min_sum) {
                min_sum = current_sum;
                index1 = i;
                index2 = j;
            }
        }
    }

    printf("%d %d\n", index1, index2);
}

int main() {
    int arr[30];

    for (int i = 0; i < 30; i++) {
        if (scanf("%d", &arr[i]) != 1) {
            return 0;
        }
    }

    find_min_sum_pair(30, arr);

    return 0;
}
