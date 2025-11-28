//Q112: Maximum sum of contiguous subarray (Kadane's Algorithm)
#include <stdio.h>

int main() {
    int n, i;
    
    printf("Enter size of array: ");
    scanf("%d", &n);
    
    int arr[n];
    
    printf("Enter array elements:\n");
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    
    printf("Array: ");
    for (i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
    
    // Kadane's Algorithm
    int max_sum = arr[0];
    int current_sum = arr[0];
    
    printf("\nKadane's Algorithm process:\n");
    printf("Index 0: current_sum = %d, max_sum = %d\n", current_sum, max_sum);
    
    for (i = 1; i < n; i++) {
        current_sum = (arr[i] > current_sum + arr[i]) ? arr[i] : current_sum + arr[i];
        max_sum = (current_sum > max_sum) ? current_sum : max_sum;
        printf("Index %d: current_sum = %d, max_sum = %d\n", i, current_sum, max_sum);
    }
    
    printf("\nMaximum sum of contiguous subarray: %d\n", max_sum);
    
    return 0;
}