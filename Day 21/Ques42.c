//Q42: Check if a number is a perfect number.
#include <stdio.h>

int main() {
    long long n;
    long long sum = 1;

    printf("Enter number: ");
    if (scanf("%lld", &n) != 1) {
        printf("Invalid input\n");
        return 0;
    }

    if (n <= 1) {
        printf("%lld is not a perfect number\n", n);
        return 0;
    }

    long long i = 2;
    while (i * i <= n) {
        if (n % i == 0) {
            sum += i;
            long long pair = n / i;
            if (pair != i && pair != n) sum += pair;
        }
        i++;
    }

    if (sum == n) {
        printf("%lld is a perfect number\n", n);
    } else {
        printf("%lld is not a perfect number\n", n);
    }

    return 0;
}
