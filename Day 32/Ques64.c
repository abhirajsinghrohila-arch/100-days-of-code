//Q64: Find the digit that occurs the most times in an integer number.
#include <stdio.h>

int main() {
    long long n;
    if (scanf("%lld", &n) != 1) return 0;
    if (n < 0) n = -n;

    int freq[10] = {0};
    if (n == 0) freq[0] = 1;
    while (n > 0) {
        int d = (int)(n % 10);
        freq[d]++;
        n /= 10;
    }

    int bestDigit = 0, bestCount = freq[0];
    for (int d = 1; d <= 9; d++) {
        if (freq[d] > bestCount) {
            bestCount = freq[d];
            bestDigit = d;
        }
    }
    printf("%d\n", bestDigit);
    return 0;
}


