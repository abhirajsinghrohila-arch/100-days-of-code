//Q106: Find next greater element for each element (brute force)
#include <stdio.h>

int main() {
    int n, i, j;
    
    printf("Enter size of array: ");
    scanf("%d", &n);
    
    int arr[n];
    int next_greater[n];
    
    printf("Enter array elements:\n");
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    
    printf("Array: ");
    for (i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
    
    // Find next greater element for each element using brute force
    for (i = 0; i < n; i++) {
        next_greater[i] = -1;  // Default value
        
        // Look for next greater element to the right
        for (j = i + 1; j < n; j++) {
            if (arr[j] > arr[i]) {
                next_greater[i] = arr[j];
                break;
            }
        }
        
        printf("For element %d at index %d: ", arr[i], i);
        if (next_greater[i] != -1) {
            printf("Next greater element is %d\n", next_greater[i]);
        } else {
            printf("No next greater element\n");
        }
    }
    
    printf("\nNext Greater Elements: ");
    for (i = 0; i < n; i++) {
        printf("%d", next_greater[i]);
        if (i < n - 1) {
            printf(", ");
        }
    }
    printf("\n");
    
    return 0;
}