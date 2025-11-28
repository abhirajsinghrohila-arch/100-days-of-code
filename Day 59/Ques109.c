//Q109: Maximum sum of all subarrays of size k
#include <stdio.h>

int main() {
    int n, k, i, j;
    int max_sum = 0;
    
    printf("Enter size of array: ");
    scanf("%d", &n);
    
    int arr[n];
    
    printf("Enter array elements:\n");
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    
    printf("Enter subarray size k: ");
    scanf("%d", &k);
    
    printf("Array: ");
    for (i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
    printf("Subarray size k: %d\n", k);
    
    if (k > n) {
        printf("Error: k cannot be greater than array size\n");
        return 1;
    }
    
    // Find all subarrays of size k and their sums
    printf("\nAll subarrays of size %d:\n", k);
    
    for (i = 0; i <= n - k; i++) {
        int current_sum = 0;
        
        printf("Subarray %d: [", i + 1);
        for (j = i; j < i + k; j++) {
            printf("%d", arr[j]);
            if (j < i + k - 1) printf(", ");
            current_sum += arr[j];
        }
        printf("] = %d\n", current_sum);
        
        // Update maximum sum
        if (i == 0 || current_sum > max_sum) {
            max_sum = current_sum;
        }
    }
    
    printf("\nMaximum sum of subarray of size %d: %d\n", k, max_sum);
    
    return 0;
}

// Optimized O(n) solution using sliding window:
/*
int maxSumSubarray(int arr[], int n, int k) {
    if (k > n) return -1;
    
    // Calculate sum of first window
    int window_sum = 0;
    for (int i = 0; i < k; i++) {
        window_sum += arr[i];
    }
    
    int max_sum = window_sum;
    
    // Slide the window
    for (int i = k; i < n; i++) {
        window_sum = window_sum - arr[i - k] + arr[i];
        max_sum = (window_sum > max_sum) ? window_sum : max_sum;
    }
    
    return max_sum;
}
*/