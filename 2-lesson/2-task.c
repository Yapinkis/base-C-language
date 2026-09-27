#include <stdio.h>
#include "2-lesson-rules.h"

int main(void) {
    SetConsoleOutputCP(65001);
    int decimal_number;

    printf("Введите шестнадцатеричное число (например, 1A or ff): ");

    if (scanf("%x", &decimal_number) != 1) {
        printf("Ошибка ввода! Некорректное 16-ричное число.\n");
        return 1;
    }

    printf("Десятичное значение: %d\n", decimal_number);

    return 0;
}