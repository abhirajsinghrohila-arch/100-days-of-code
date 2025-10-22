//Q37: Find the LCM of two numbers.
#include <stdio.h>

int main() {
    int a, b, lcm, x;

    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);

    x = (a > b) ? a : b;
    while (1) {
        if (x % a == 0 && x % b == 0) {
            lcm = x;
            break;
        }
        x++;
    }

    printf("LCM of %d and %d: %d\n", a, b, lcm);
    return 0;
}

