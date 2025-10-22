//Q41: Swap the first and last digit of a number.
#include <stdio.h>

int main() {
    long long num, n, swapped;
    long long power10 = 1, first, last, middle, sign = 1;

    printf("Enter number: ");
    if (scanf("%lld", &num) != 1) {
        printf("Invalid input\n");
        return 0;
    }

    if (num < 0) { sign = -1; n = -num; } else { n = num; }

    if (n < 10) {
        printf("After swap: %lld\n", num);
        return 0;
    }

    long long t = n;
    while (t >= 10) {
        t /= 10;
        power10 *= 10;
    }
    first = t;
    last = n % 10;

    middle = (n % power10) / 10;

    swapped = last * power10 + middle * 10 + first;
    swapped *= sign;

    printf("After swap: %lld\n", swapped);
    return 0;
}
