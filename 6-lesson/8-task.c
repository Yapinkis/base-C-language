#include <stdio.h>
#include <ctype.h>

char to_upper(char c) {
    return (char)toupper((unsigned char)c);
}

int main(void) {
    int c;

    while ((c = getchar()) != EOF && c != '.') {
        putchar(to_upper((char)c));
    }

    putchar('\n');

    return 0;
}