#include <stdio.h>

int findCeilIndex(int arr[], int n, int x) {
    int low = 0, high = n - 1;
    int ceilIndex = -1;

    while (low <= high) {
        int mid = (low + high) / 2;

        if (arr[mid] >= x) {
            ceilIndex = mid;   
            high = mid - 1;    
        } else {
            low = mid + 1;
        }
    }
    return ceilIndex;
}

int main() {
    int n, x;

    printf("Enter number of elements in sorted array: ");
    scanf("%d", &n);

    int arr[n];
    printf("Enter %d sorted elements: ", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Enter the value of x: ");
    scanf("%d", &x);

    int index = findCeilIndex(arr, n, x);

    if (index == -1)
        printf("-1\n");
    else
        printf("Ceil index: %d\n", index);

    return 0;
}
