//Q118: Find missing number from 0 to n
#include <stdio.h>

int main() {
    int n, i;
    
    printf("Enter size of array: ");
    scanf("%d", &n);
    
    int nums[n];
    
    printf("Enter array elements (0 to %d with one missing):\n", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &nums[i]);
    }
    
    // Calculate expected sum (0 to n)
    int expected_sum = (n * (n + 1)) / 2;
    
    // Calculate actual sum
    int actual_sum = 0;
    for (i = 0; i < n; i++) {
        actual_sum += nums[i];
    }
    
    int missing = expected_sum - actual_sum;
    
    printf("Missing number: %d\n", missing);
    
    return 0;
}