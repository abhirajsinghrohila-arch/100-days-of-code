//Q108: Product of array except self
#include <stdio.h>

int main() {
    int n, i, j;
    
    printf("Enter size of array: ");
    scanf("%d", &n);
    
    int nums[n];
    int answer[n];
    
    printf("Enter array elements:\n");
    for (i = 0; i < n; i++) {
        scanf("%d", &nums[i]);
    }
    
    printf("Array: ");
    for (i = 0; i < n; i++) {
        printf("%d ", nums[i]);
    }
    printf("\n");
    
    // Calculate product of all elements except self
    for (i = 0; i < n; i++) {
        int product = 1;
        
        // Multiply all elements except nums[i]
        for (j = 0; j < n; j++) {
            if (i != j) {
                product *= nums[j];
            }
        }
        
        answer[i] = product;
        printf("Product except nums[%d] (%d): %d\n", i, nums[i], answer[i]);
    }
    
    printf("\nAnswer array: ");
    for (i = 0; i < n; i++) {
        printf("%d ", answer[i]);
    }
    printf("\n");
    
    return 0;
}

// Optimized O(n) solution without division:
/*
void productExceptSelf(int nums[], int n, int answer[]) {
    // Step 1: Calculate left products
    answer[0] = 1;
    for (int i = 1; i < n; i++) {
        answer[i] = answer[i-1] * nums[i-1];
    }
    
    // Step 2: Calculate right products and multiply with left products
    int right = 1;
    for (int i = n-1; i >= 0; i--) {
        answer[i] *= right;
        right *= nums[i];
    }
}
*/