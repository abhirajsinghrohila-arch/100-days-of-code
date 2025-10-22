//Q2: Write a program to input two numbers and display their sum, difference, product and quotient.
#include <stdio.h>

int main() 
{
    int a, b;
    
    printf("Enter first number: ");
    scanf("%d", &a);
    
    printf("Enter second number: ");
    scanf("%d", &b);
    
    printf("Sum: %d + %d = %d\n", a, b, a + b);
    printf("Difference: %d - %d = %d\n", a, b, a - b);
    printf("Product: %d * %d = %d\n", a, b, a * b);
    
    if (b != 0) {
        printf("Quotient: %d / %d = %.2f\n", a, b, (float)a / b);
    } else {
        printf("Quotient: Cannot divide by zero!\n");
    }
    
    return 0;
}