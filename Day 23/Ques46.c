//Q46: Print a 5x5 block of asterisks pattern.
#include <stdio.h>

int main() {
    int i, j;
    for (i = 0; i < 5; i++) {
        for (j = 0; j < 5; j++) {
            printf("*");
        }
        printf("\n");
    }
    return 0;
}
