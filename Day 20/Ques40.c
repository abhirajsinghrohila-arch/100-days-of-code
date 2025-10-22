//Q40: Find the 1’s complement of a binary number and print it.
#include <stdio.h>

int main() {
    long long bin, n, complement = 0, place = 1;
    int bit, inv;

    printf("Enter binary: ");
    if (scanf("%lld", &bin) != 1) {
        printf("Invalid input\n");
        return 0;
    }

    n = (bin < 0) ? -bin : bin;

    if (n == 0) {
        printf("1's complement: 1\n");
        return 0;
    }

    while (n > 0) {
        bit = (int)(n % 10);
        if (bit != 0 && bit != 1) {
            printf("Invalid binary\n");
            return 0;
        }
        inv = (bit == 0) ? 1 : 0;
        complement += (long long)inv * place;
        place *= 10;
        n /= 10;
    }

    printf("1's complement: %lld\n", complement);
    return 0;
}
