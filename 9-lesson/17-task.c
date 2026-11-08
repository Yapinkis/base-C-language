#include <stdio.h>

int get_matrix_trace(int size, int matrix[5][5]) {
    int trace = 0;

    for (int i = 0; i < size; i++) {
        trace += matrix[i][i];
    }

    return trace;
}

int main() {
    int matrix[5][5];

    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 5; j++) {
            if (scanf("%d", &matrix[i][j]) != 1) {
                return 0;
            }
        }
    }

    int result = get_matrix_trace(5, matrix);
    printf("%d\n", result);

    return 0;
}
