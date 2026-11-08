#include <stdio.h>

float get_diagonal_average(int size, int matrix[5][5]) {
    int sum = 0;
    for (int i = 0; i < size; i++) {
        sum += matrix[i][i];
    }
    return (float)sum / size;
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

    float avg = get_diagonal_average(5, matrix);

    int count = 0;
    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 5; j++) {
            if (matrix[i][j] > 0 && (float)matrix[i][j] > avg) {
                count++;
            }
        }
    }

    printf("%d\n", count);

    return 0;
}
