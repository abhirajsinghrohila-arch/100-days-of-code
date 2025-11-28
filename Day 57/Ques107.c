//Q107: Find previous greater element for each element (brute force)
#include <stdio.h>

int main() {
    int n, i, j;
    
    printf("Enter size of array: ");
    scanf("%d", &n);
    
    int arr[n];
    int prev_greater[n];
    
    printf("Enter array elements:\n");
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    
    printf("Array: ");
    for (i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
    
    // Find previous greater element for each element using brute force
    for (i = 0; i < n; i++) {
        prev_greater[i] = -1;  // Default value
        
        // Look for previous greater element to the left
        for (j = i - 1; j >= 0; j--) {
            if (arr[j] > arr[i]) {
                prev_greater[i] = arr[j];
                break;
            }
        }
        
        printf("For element %d at index %d: ", arr[i], i);
        if (prev_greater[i] != -1) {
            printf("Previous greater element is %d\n", prev_greater[i]);
        } else {
            printf("No previous greater element\n");
        }
    }
    
    printf("\nPrevious Greater Elements: ");
    for (i = 0; i < n; i++) {
        printf("%d", prev_greater[i]);
        if (i < n - 1) {
            printf(", ");
        }
    }
    printf("\n");
    
    return 0;
}