//Q60: Count positive, negative, and zero elements in an array.
#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);
    int pos = 0, neg = 0, zero = 0;
    for (int i = 0; i < n; i++) {
        int x;
        scanf("%d", &x);
        if (x > 0) pos++;
        else if (x < 0) neg++;
        else zero++;
    }
    printf("positive = %d\n", pos);
    printf("negative = %d\n", neg);
    printf("zero = %d\n", zero);
    return 0;
}

