//Q65: Search in a sorted array using binary search.
#include <stdio.h>

int main() {
    int n;
    if (scanf("%d", &n) != 1 || n <= 0) return 0;
    int arr[n];
    for (int i = 0; i < n; i++) scanf("%d", &arr[i]);
    int target;
    scanf("%d", &target);

    int l = 0, r = n - 1, pos = -1;
    while (l <= r) {
        int mid = l + (r - l) / 2;
        if (arr[mid] == target) { pos = mid + 1; break; }
        else if (arr[mid] < target) l = mid + 1;
        else r = mid - 1;
    }
    if (pos == -1) printf("Not found\n");
    else printf("Found at position %d\n", pos);
    return 0;
}


