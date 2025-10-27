#include <stdio.h>

int findFirstOccurrence(int nums[], int n, int target) {
    int low = 0, high = n - 1, first = -1;

    while (low <= high) {
        int mid = (low + high) / 2;

        if (nums[mid] == target) {
            first = mid;
            high = mid - 1;  
        } else if (nums[mid] > target) {
            high = mid - 1;
        } else {
            low = mid + 1;
        }
    }
    return first;
}

int findLastOccurrence(int nums[], int n, int target) {
    int low = 0, high = n - 1, last = -1;

    while (low <= high) {
        int mid = (low + high) / 2;

        if (nums[mid] == target) {
            last = mid;
            low = mid + 1; 
        } else if (nums[mid] > target) {
            high = mid - 1;
        } else {
            low = mid + 1;
        }
    }
    return last;
}

int main() {
    int n, target;

    printf("Enter number of elements in sorted array: ");
    scanf("%d", &n);

    int nums[n];
    printf("Enter %d sorted elements: ", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &nums[i]);
    }

    printf("Enter target value: ");
    scanf("%d", &target);

    int first = findFirstOccurrence(nums, n, target);
    int last = findLastOccurrence(nums, n, target);

    if (first == -1 || last == -1)
        printf("-1, -1\n");
    else
        printf("First occurrence index: %d\nLast occurrence index: %d\n", first, last);

    return 0;
}
