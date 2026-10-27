#include <stdio.h>

void reverse(void) {
    int ch = getchar();

    if (ch == '.' || ch == EOF) {
        return;
    }

    reverse();
    putchar(ch);
}

int main(void) {
    reverse();

    return 0;
}
