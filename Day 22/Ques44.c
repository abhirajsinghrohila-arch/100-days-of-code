//Q44: Find the sum of the series 1 + 3/4 + 5/6 + ... up to n terms.
#include <stdio.h>

int main() {
    int n, i;
    double sum = 0.0;

    printf("Enter terms: ");
    if (scanf("%d", &n) != 1 || n <= 0) {
        printf("Invalid input\n");
        return 0;
    }

    if (n >= 1) sum += 1.0;
    for (i = 2; i <= n; i++) {
        double num = (double)(2 * i - 1);
        double den = (double)(2 * i);
        sum += num / den;
    }

    printf("Sum: %.6f\n", sum);
    return 0;
}
