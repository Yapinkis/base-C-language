#include "input_validation.h"

#include <stdio.h>
#include <stdlib.h>
#include <limits.h>
#include <errno.h>
#include <ctype.h>

int read_int(void) {
    char buffer[128];
    char *end;

    long number;

    while (1) {
        printf("Введите целое число: ");

        if (fgets(buffer, sizeof(buffer), stdin) == NULL) {
            exit(EXIT_FAILURE);
        }

        errno = 0;

        number = strtol(buffer, &end, 10);

        if (buffer == end) {
            printf("Ошибка: число не найдено!\n");
            continue;
        }

        while (isspace((unsigned char)*end)) {
            end++;
        }

        if (*end != '\0') {
            printf("Ошибка: посторонние символы!\n");
            continue;
        }

        if (errno == ERANGE ||
            number < INT_MIN ||
            number > INT_MAX) {

            printf("Ошибка: выход за диапазон int!\n");
            continue;
            }

        return (int)number;
    }
}