//Q45: Sum series 2/3 + 4/7 + 6/11 + 8/15 + ... up to n terms.
#include <stdio.h>

int main() {
    int n, i;
    double sum = 0.0;

    printf("Enter terms: ");
    if (scanf("%d", &n) != 1 || n <= 0) {
        printf("Invalid input\n");
        return 0;
    }

    for (i = 1; i <= n; i++) {
        double numerator = 2.0 * i;
        double denominator = 4.0 * i - 1.0;
        sum += numerator / denominator;
    }

    printf("Sum: %.6f\n", sum);
    return 0;
}
