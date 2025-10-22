//Q68: Delete an element from an array.
#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);
    if (n <= 0) {
        printf("Invalid input\n");
        return 0;
    }

    int arr[n];
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    int pos;
    scanf("%d", &pos);

    if (pos < 1 || pos > n) {
        printf("Invalid position\n");
        return 0;
    }

    for (int i = pos - 1; i < n - 1; i++) {
        arr[i] = arr[i + 1];
    }

    for (int i = 0; i < n - 1; i++) {
        if (i) printf(" ");
        printf("%d", arr[i]);
    }
    printf("\n");
    return 0;
}


