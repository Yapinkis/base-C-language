#include <stdio.h>

int find_row_max(int row[10]) {
    int max = row[0];
    for (int i = 1; i < 10; i++) {
        if (row[i] > max) {
            max = row[i];
        }
    }
    return max;
}

int main() {
    int matrix[10][10];
    int total_sum = 0;

    for (int i = 0; i < 10; i++) {
        for (int j = 0; j < 10; j++) {
            if (scanf("%d", &matrix[i][j]) != 1) {
                return 0;
            }
        }
    }

    for (int i = 0; i < 10; i++) {
        total_sum += find_row_max(matrix[i]);
    }

    printf("%d\n", total_sum);

    return 0;
}
