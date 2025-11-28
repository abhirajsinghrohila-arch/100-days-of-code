#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);

    // Total sum from 1 to n
    long totalSum = (long)n * (n + 1) / 2;

    // We need: (x * (x + 1)) / 2 == totalSum - (x * (x - 1)) / 2
    // Which simplifies: x^2 = totalSum

    long left = 1, right = n;
    int pivot = -1;

    while (left <= right) {
        long mid = (left + right) / 2;

        long leftSum = mid * (mid + 1) / 2;   // Sum 1..mid
        long rightSum = totalSum - (mid - 1) * mid / 2; // Sum mid..n

        if (leftSum == rightSum) {
            pivot = mid;
            break;
        }
        else if (leftSum < rightSum)
            left = mid + 1;
        else
            right = mid - 1;
    }

    printf("%d", pivot);
    return 0;
}
