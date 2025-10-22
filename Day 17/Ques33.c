//Q33: Check if a number is an Armstrong number.
#include <stdio.h>

int main() {
    int num, original, digitCount = 0;
    int temp, digit;
    long long sum = 0;

    printf("Enter number: ");
    scanf("%d", &num);

    original = num;
    temp = num;

    // count digits
    if (temp == 0) {
        digitCount = 1;
    } else {
        while (temp != 0) {
            digitCount++;
            temp /= 10;
        }
    }

    // compute sum of each digit raised to digitCount
    temp = num;
    while (temp != 0) {
        digit = temp % 10;
        // integer power: digit^digitCount
        long long p = 1;
        int k;
        for (k = 0; k < digitCount; k++) {
            p *= digit;
        }
        sum += p;
        temp /= 10;
    }

    if (sum == original) {
        printf("%d is an Armstrong number\n", original);
    } else {
        printf("%d is not an Armstrong number\n", original);
    }

    return 0;
}
