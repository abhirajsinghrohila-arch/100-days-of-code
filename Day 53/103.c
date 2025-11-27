#include <stdio.h>

int main() {
    int n;
    printf("Enter size of array: ");
    scanf("%d", &n);

    int arr[n];
    printf("Enter %d elements: ", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    int totalSum = 0, leftSum = 0;

    // Calculate total sum of array
    for (int i = 0; i < n; i++) {
        totalSum += arr[i];
    }

    // Find pivot index
    for (int i = 0; i < n; i++) {

        int rightSum = totalSum - leftSum - arr[i];

        if (leftSum == rightSum) {
            printf("%d", i);
            return 0;  // leftmost pivot found
        }

        leftSum += arr[i];
    }

    // No pivot index exists
    printf("-1");
    return 0;
}
