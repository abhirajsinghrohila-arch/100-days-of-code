//Q110: Maximum element in each subarray of size k (sliding window)
#include <stdio.h>

int main() {
    int n, k, i, j;
    
    printf("Enter size of array: ");
    scanf("%d", &n);
    
    int arr[n];
    
    printf("Enter array elements:\n");
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    
    printf("Enter window size k: ");
    scanf("%d", &k);
    
    printf("Array: ");
    for (i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
    printf("Window size k: %d\n", k);
    
    if (k > n) {
        printf("Error: k cannot be greater than array size\n");
        return 1;
    }
    
    printf("\nSliding window maximums:\n");
    
    // Process each window of size k
    for (i = 0; i <= n - k; i++) {
        int max_in_window = arr[i];
        
        printf("Window %d: [", i + 1);
        for (j = i; j < i + k; j++) {
            printf("%d", arr[j]);
            if (j < i + k - 1) printf(", ");
            
            // Find maximum in current window
            if (arr[j] > max_in_window) {
                max_in_window = arr[j];
            }
        }
        printf("] -> Max: %d\n", max_in_window);
    }
    
    printf("\nMaximum elements in each window: ");
    for (i = 0; i <= n - k; i++) {
        int max_in_window = arr[i];
        
        // Find maximum in current window
        for (j = i; j < i + k; j++) {
            if (arr[j] > max_in_window) {
                max_in_window = arr[j];
            }
        }
        
        printf("%d", max_in_window);
        if (i < n - k) {
            printf(" ");
        }
    }
    printf("\n");
    
    return 0;
}