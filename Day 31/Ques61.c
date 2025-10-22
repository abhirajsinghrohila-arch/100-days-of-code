//Q61: Search for an element in an array using linear search.
#include <stdio.h>

int main() {
    int n;
    if (scanf("%d", &n) != 1 || n <= 0) return 0;
    int arr[n];
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    int target;
    scanf("%d", &target);

    int pos = -1; // 1-based index if found
    for (int i = 0; i < n; i++) {
        if (arr[i] == target) {
            pos = i + 1;
            break;
        }
    }

    if (pos == -1) printf("Not found\n");
    else printf("Found at position %d\n", pos);
    return 0;
}


