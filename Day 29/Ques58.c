//Q58: Find the maximum and minimum element in an array.
#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);
    int min, max;
    for (int i = 0; i < n; i++) {
        int x;
        scanf("%d", &x);
        if (i == 0) {
            min = max = x;
        } else {
            if (x < min) { min = x; }
            if (x > max) { max = x; }
        }
    }
    printf("min = %d \n", min);
    printf("max = %d \n", max);
    return 0;
}