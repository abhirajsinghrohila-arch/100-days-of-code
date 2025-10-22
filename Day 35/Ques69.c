//Q69: Find the second largest element in an array.
#include <stdio.h>

int main() {
    int n, i;
    
    printf("Enter number of elements: ");
    scanf("%d", &n);
    
    int arr[n];
    
    printf("Enter elements:\n");
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    
    int largest = arr[0];
    int second_largest = arr[0];
    
    // Find largest
    for (i = 1; i < n; i++) {
        if (arr[i] > largest) {
            largest = arr[i];
        }
    }
    
    // Find second largest
    for (i = 0; i < n; i++) {
        if (arr[i] > second_largest && arr[i] < largest) {
            second_largest = arr[i];
        }
    }
    
    if (second_largest == largest) {
        printf("No second largest element found\n");
    } else {
        printf("Second largest element: %d\n", second_largest);
    }
    
    return 0;
}
