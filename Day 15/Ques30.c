//Q30: Reverse a given number.
#include <stdio.h>

int main() {
    int n, reversed = 0;

    printf("Enter a number: ");
    scanf("%d", &n);

    int original = n;  ß

    
    int is_negative = 0;
    if (n < 0) {
        is_negative = 1;
        n = -n;
    }

    while (n != 0) {
        int digit = n % 10;
        reversed = reversed * 10 + digit;
        n /= 10;
    }

    if (is_negative) {
        reversed = -reversed;
    }

    printf("Reversed number: %d\n", reversed);

    return 0;
}
