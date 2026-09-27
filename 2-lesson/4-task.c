#include <stdio.h>

int main(void)
{
    printf("A B | A -> B | A <-> B\n");
    printf("----------------------\n");

    for (int A = 0; A <= 1; A++) {
        for (int B = 0; B <= 1; B++) {

            int implication = !A || B;

            int equivalence =
                (A && B) || (!A && !B);

            printf("%d %d |    %d   |    %d\n",
                   A, B, implication, equivalence);
        }
    }

    return 0;
}