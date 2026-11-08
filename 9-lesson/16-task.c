#include <stdio.h>

int main() {
    char col;
    int row;

    if (scanf("%c%d", &col, &row) == 2) {
        int col_num = col - 'a' + 1;

        if ((col_num + row) % 2 == 0) {
            printf("BLACK\n");
        } else {
            printf("WHITE\n");
        }
    }

    return 0;
}