//Q66: Insert an element in a sorted array at the appropriate position.
#include <stdio.h>

int main() {
    int n;
    if (scanf("%d", &n) != 1 || n < 0) return 0;
    int arr[n + 1];
    for (int i = 0; i < n; i++) scanf("%d", &arr[i]);
    int val;
    scanf("%d", &val);

    int i = n - 1;
    while (i >= 0 && arr[i] > val) {
        arr[i + 1] = arr[i];
        i--;
    }
    arr[i + 1] = val;

    for (int j = 0; j < n + 1; j++) {
        if (j) printf(" ");
        printf("%d", arr[j]);
    }
    printf("\n");
    return 0;
}


