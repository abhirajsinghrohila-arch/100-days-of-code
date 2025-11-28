//Q116: Two Sum - Find two indices that sum to target
#include <stdio.h>

int main() {
    int n, target, i, j;
    int found = 0;
    
    printf("Enter size of array: ");
    scanf("%d", &n);
    
    int nums[n];
    
    printf("Enter array elements:\n");
    for (i = 0; i < n; i++) {
        scanf("%d", &nums[i]);
    }
    
    printf("Enter target sum: ");
    scanf("%d", &target);
    
    printf("Array: ");
    for (i = 0; i < n; i++) {
        printf("%d ", nums[i]);
    }
    printf("\n");
    printf("Target: %d\n", target);
    
    // Find two indices
    for (i = 0; i < n - 1; i++) {
        for (j = i + 1; j < n; j++) {
            if (nums[i] + nums[j] == target) {
                printf("%d %d\n", i, j);
                found = 1;
                break;
            }
        }
        if (found) break;
    }
    
    if (!found) {
        printf("-1 -1\n");
    }
    
    return 0;
}