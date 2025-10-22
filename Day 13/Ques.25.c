//Q25: Basic calculator using switch-case for +, -, *, /, %.
#include <stdio.h>

int main() {
    int a, b;
    char op;

    // Input like: 10 + 5
    printf("Enter: a op b (e.g., 10 + 5): ");
    scanf("%d %c %d", &a, &op, &b);

    switch (op) {
        case '+':
            printf("%d\n", a + b);
            break;
        case '-':
            printf("%d\n", a - b);
            break;
        case '*':
            printf("%d\n", a * b);
            break;
        case '/':
            if (b == 0) printf("Error\n");
            else printf("%d\n", a / b); // integer division
            break;
        case '%':
            if (b == 0) printf("Error\n");
            else printf("%d\n", a % b);
            break;
        default:
            printf("Error\n");
    }

    return 0;
}
