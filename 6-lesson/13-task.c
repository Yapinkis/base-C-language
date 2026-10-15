#include <stdio.h>

float cosinus(float x) {
    const float PI = 3.14159265358979323846f;
    x = x * PI / 180.0f;
    float sum = 1.0f;
    float term = 1.0f;

    int n = 1;

    while (1) {
        term *= -x * x / ((2 * n - 1) * (2 * n));

        if (term < 0.0001f && term > -0.0001f) {
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

    printf("%.3f\n", cosinus(x));

    return 0;
}