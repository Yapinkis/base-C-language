#include <stdio.h>

int acounter(void) {
    int ch = getchar();

    if (ch == '.' || ch == EOF) {
        return 0;
    }
    
    if (ch == 'a') {
        return 1 + acounter();
    }

    return acounter();
}

int main(void) {
    printf("%d\n", acounter());
    return 0;
}
