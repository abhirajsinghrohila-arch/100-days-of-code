//Q36: Find the HCF (GCD) of two numbers.
#include <stdio.h>

int main() {
    int a, b, hcf = 1, i, limit;

    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);

    limit = (a < b) ? a : b;
    for (i = 1; i <= limit; i++) {
        if (a % i == 0 && b % i == 0) {
            hcf = i;
        }
    }

    printf("HCF of %d and %d: %d\n", a, b, hcf);
    return 0;
}
