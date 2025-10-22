//Q8: Calculate the sum of the first n natural numbers.
#include <stdio.h>

int main() {
    int n, sum = 0;

    printf("Enter the value of n: ");
    scanf("%d", &n);

    for (int i = 1; i <= n; i++) {
        sum += i;
    }

    printf("Sum of the first %d natural numbers is: %d\n", n, sum);

    return 0;
}
