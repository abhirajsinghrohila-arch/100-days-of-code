//Q70: Rotate an array to the right by k positions.
#include <stdio.h>

int main() {
    int n, k, i, j;
    
    printf("Enter number of elements: ");
    scanf("%d", &n);
    
    int arr[n];
    int temp[n];
    
    printf("Enter elements:\n");
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    
    printf("Enter number of positions to rotate right: ");
    scanf("%d", &k);
    
    printf("Original array: ");
    for (i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
    
    // Copy array to temp
    for (i = 0; i < n; i++) {
        temp[i] = arr[i];
    }
    
    // Rotate
    for (i = 0; i < n; i++) {
        j = (i + k) % n;
        arr[j] = temp[i];
    }
    
    printf("Rotated array: ");
    for (i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
    
    return 0;
}
