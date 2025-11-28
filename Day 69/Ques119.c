//Q119: Find repeated element in single iteration
#include <stdio.h>

int main() {
    int n, i;
    
    printf("Enter size of array: ");
    scanf("%d", &n);
    
    int nums[n];
    
    printf("Enter array elements:\n");
    for (i = 0; i < n; i++) {
        scanf("%d", &nums[i]);
    }
    
    // Using sum approach
    int actual_sum = 0;
    int expected_sum = 0;
    
    for (i = 0; i < n; i++) {
        actual_sum += nums[i];
    }
    
    // Find max element
    int max = nums[0];
    for (i = 1; i < n; i++) {
        if (nums[i] > max) {
            max = nums[i];
        }
    }
    
    // Expected sum without duplicate
    for (i = 0; i <= max; i++) {
        expected_sum += i;
    }
    
    int repeated = actual_sum - expected_sum;
    
    printf("Repeated element: %d\n", repeated);
    
    return 0;
}