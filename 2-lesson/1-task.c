#include <stdio.h>
#include "2-lesson-rules.h"

int main(void) {
    SetConsoleOutputCP(65001);
    int number;

    printf("Введите десятичное число: ");
    if (scanf("%d", &number) != 1) {
        printf("Ошибка ввода!\n");
        return 1;
    }

    printf("Шестнадцатеричное значение: %X\n", number);

    return 0;
}