//Q59: Count even and odd numbers in an array.
#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);
    int evenCount = 0, oddCount = 0;
    for (int i = 0; i < n; i++) {
        int x;
        scanf("%d", &x);
        if (x % 2 == 0) {
            evenCount++;
        } else {
            oddCount++;
        }
    }
    printf("even = %d\n", evenCount);
    printf("odd = %d\n", oddCount);
    return 0;
}

