//Q43: Check if a number is a strong number.
#include <stdio.h>

long long factorial(int d) {
    long long f = 1;
    int i;
    for (i = 2; i <= d; i++) f *= i;
    return f;
}

int main() {
    long long num, n, sum = 0;
    int digit;

    printf("Enter number: ");
    if (scanf("%lld", &num) != 1) {
        printf("Invalid input\n");
        return 0;
    }

    if (num < 0) {
        printf("%lld is not a strong number\n", num);
        return 0;
    }

    n = num;
    if (n == 0) {
        sum = factorial(0);
    } else {
        while (n > 0) {
            digit = (int)(n % 10);
            sum += factorial(digit);
            n /= 10;
        }
    }

    if (sum == num) {
        printf("%lld is a strong number\n", num);
    } else {
        printf("%lld is not a strong number\n", num);
    }

    return 0;
}
