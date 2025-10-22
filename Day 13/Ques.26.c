//Q26: Print numbers from 1 to n.
#include <stdio.h>

int main() {
    int n;

    printf("Enter n: ");
    scanf("%d", &n);

    if (n < 1) {
        printf("Invalid input\n");
        return 0;
    }

    for (int i = 1; i <= n; i++) {
        printf("%d\n", i);
    }

    return 0;
}
