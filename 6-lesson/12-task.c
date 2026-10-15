#include <stdio.h>

float sinus(float x) {
    const float PI = 3.14159265358979323846f;

    x = x * PI / 180.0f;

    float sum = x;
    float term = x;

    int n = 1;

    while (1) {
        term *= -x * x / ((2 * n) * (2 * n + 1));

        if (term < 0.001f && term > -0.001f) {
            break;
        }

        sum += term;
        n++;
    }

    return sum;
}

int main(void) {
    float x;

    if (scanf("%f", &x) != 1) {
        return 1;
    }

    printf("%.3f\n", sinus(x));

    return 0;
}