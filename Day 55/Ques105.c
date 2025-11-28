//Q105: Find majority element (appears more than n/2 times)
#include <stdio.h>

int main() {
    int n, i, j;
    int majority = -1;
    
    printf("Enter size of array: ");
    scanf("%d", &n);
    
    int nums[n];
    
    printf("Enter array elements:\n");
    for (i = 0; i < n; i++) {
        scanf("%d", &nums[i]);
    }
    
    printf("Array: ");
    for (i = 0; i < n; i++) {
        printf("%d ", nums[i]);
    }
    printf("\n");
    printf("Array size: %d\n", n);
    printf("Majority threshold: %d (more than n/2)\n", n/2);
    
    // Check each element for majority
    for (i = 0; i < n; i++) {
        int count = 0;
        
        // Count occurrences of nums[i]
        for (j = 0; j < n; j++) {
            if (nums[j] == nums[i]) {
                count++;
            }
        }
        
        printf("Element %d appears %d times\n", nums[i], count);
        
        // Check if this element is majority
        if (count > n/2) {
            majority = nums[i];
            break;
        }
    }
    
    if (majority != -1) {
        printf("Majority element: %d\n", majority);
    } else {
        printf("No majority element found\n");
        printf("Result: -1\n");
    }
    
    return 0;
}

// Follow-up: O(n) solution using Boyer-Moore Voting Algorithm
/*
int findMajority(int nums[], int n) {
    int candidate = 0, count = 0;
    
    // Phase 1: Find candidate
    for (int i = 0; i < n; i++) {
        if (count == 0) {
            candidate = nums[i];
        }
        count += (nums[i] == candidate) ? 1 : -1;
    }
    
    // Phase 2: Verify candidate
    count = 0;
    for (int i = 0; i < n; i++) {
        if (nums[i] == candidate) {
            count++;
        }
    }
    
    return (count > n/2) ? candidate : -1;
}
*/