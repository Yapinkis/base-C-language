#include <stdio.h>

int main() {
    char s[1005];

    if (scanf("%1004s", s) != 1) {
        return 0;
    }
    
    if (s[0] == '\0' || s[0] == '.') {
        return 0;
    }

    int i = 0;
    while (s[i] != '\0' && s[i] != '.') {
        char current_char = s[i];
        int count = 0;

        while (s[i] == current_char) {
            count++;
            i++;
        }

        printf("%c%d", current_char, count);
    }

    printf("\n");

    return 0;
}
