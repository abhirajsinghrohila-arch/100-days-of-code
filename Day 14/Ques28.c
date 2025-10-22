//Q28: Print the product of even numbers from 1 to n.
#include <stdio.h>

int main() {
    int n;
    long long product = 1;

    printf("Enter n: ");
    scanf("%d", &n);

    if (n < 1) {
        printf("Invalid input\n");
        return 0;
    }

    for (int i = 2; i <= n; i += 2) {
        product *= i;
    }

    printf("%lld\n", product);
    return 0;
}
