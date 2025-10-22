//Q62: Reverse an array without taking extra space.
#include <stdio.h>

int main() {
    int n;
    if (scanf("%d", &n) != 1 || n <= 0) return 0;
    int arr[n];
    for (int i = 0; i < n; i++) scanf("%d", &arr[i]);

    for (int i = 0, j = n - 1; i < j; i++, j--) {
        int tmp = arr[i];
        arr[i] = arr[j];
        arr[j] = tmp;
    }

    for (int i = 0; i < n; i++) {
        if (i) printf(" ");
        printf("%d", arr[i]);
    }
    printf("\n");
    return 0;
}


