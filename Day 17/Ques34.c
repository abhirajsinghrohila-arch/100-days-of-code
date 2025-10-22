//Q34: Check if a number is prime.
#include <stdio.h>

int main() {
    int num, i, isPrime = 1;

    printf("Enter number: ");
    scanf("%d", &num);

    if (num < 2) {
        isPrime = 0;
    } else if (num == 2) {
        isPrime = 1;
    } else if (num % 2 == 0) {
        isPrime = 0;
    } else {
        for (i = 3; i * i <= num; i += 2) {
            if (num % i == 0) {
                isPrime = 0;
                break;
            }
        }
    }

    if (isPrime) {
        printf("%d is a prime number\n", num);
    } else {
        printf("%d is not a prime number\n", num);
    }

    return 0;
}
