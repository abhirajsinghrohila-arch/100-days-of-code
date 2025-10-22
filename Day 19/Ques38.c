//Q38: Find the sum of digits of a number.
#include <stdio.h>

int main() {
    int num, sum = 0;

    printf("Enter number: ");
    scanf("%d", &num);

    if (num < 0) num = -num;

    while (num > 0) {
        sum += num % 10;
        num /= 10;
    }

    printf("Sum of digits: %d\n", sum);
    return 0;
}
