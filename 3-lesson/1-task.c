#include <stdio.h>
#include "3-lesson-rules.h"
#include "input_validation.h"


int main(void) {
    init_rus();

    int a, b, c;

    a = read_int();
    b = read_int();
    c = read_int();

    int sum = a + b + c;

    printf("%d+%d+%d=%d\n", a, b, c, sum);

    return 0;
}