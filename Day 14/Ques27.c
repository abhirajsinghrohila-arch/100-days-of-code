//Q27: Print the sum of the first n odd numbers.
#include <stdio.h>

int main() {
    int n;
    int sum = 0;

    printf("Enter n: ");
    scanf("%d", &n);

    if (n < 1) {
        printf("Invalid input\n");
        return 0;
    }

    for (int i = 1; i <= n; i++) {
        sum += (2 * i - 1);
    }

    printf("%d\n", sum);
    return 0;
}
