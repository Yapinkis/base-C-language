#include <stdio.h>
#include <string.h>

void print_digit_counts(const char *num_str) {
    int counts[10] = {0};

    for (int i = 0; num_str[i] != '\0'; i++) {
        if (num_str[i] >= '0' && num_str[i] <= '9') {
            int digit = num_str[i] - '0';
            counts[digit]++;
        }
    }

    for (int digit = 0; digit <= 9; digit++) {
        if (counts[digit] > 0) {
            printf("%d %d\n", digit, counts[digit]);
        }
    }
}

int main() {
    char num_str[1002];

    if (scanf("%1001s", num_str) == 1) {
        print_digit_counts(num_str);
    }

    return 0;
}
