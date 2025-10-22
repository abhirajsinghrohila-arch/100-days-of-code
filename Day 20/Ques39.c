//Q39: Find the product of odd digits of a number.
#include <stdio.h>

int main() {
    long long num, n, product = 1;
    int digit, hasOdd = 0;

    printf("Enter number: ");
    scanf("%lld", &num);

    n = (num < 0) ? -num : num;

    if (n == 0) {
        printf("Product of odd digits: 0\n");
        return 0;
    }

    while (n > 0) {
        digit = (int)(n % 10);
        if (digit % 2 != 0) {
            product *= digit;
            hasOdd = 1;
        }
        n /= 10;
    }

    if (!hasOdd) product = 0;

    printf("Product of odd digits: %lld\n", product);
    return 0;
}
