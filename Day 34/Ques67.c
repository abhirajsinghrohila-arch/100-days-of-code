//Q67: Insert an element in an array at a given position.
#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);
    if (n < 0) {
        printf("Invalid input\n");
        return 0;
    }

    int arr[n + 1];
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    int pos, val;
    scanf("%d", &pos);
    scanf("%d", &val);

    if (pos < 1 || pos > n + 1) {
        printf("Invalid position\n");
        return 0;
    }

    for (int i = n; i >= pos; i--) {
        arr[i] = arr[i - 1];
    }
    arr[pos - 1] = val;

    for (int i = 0; i < n + 1; i++) {
        if (i) printf(" ");
        printf("%d", arr[i]);
    }
    printf("\n");
    return 0;
}


