#include <stdio.h>

int main(void)
{
    char ch;

    while ((ch = getchar()) != '.') {
        if (ch >= 'A' && ch <= 'Z') {
            ch = ch + ('a' - 'A');
        }

        putchar(ch);
    }

    return 0;
}