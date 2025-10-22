//Q17: Solve a quadratic equation and print the nature of its roots.
#include <stdio.h>
#include <math.h>

int main() {
    double a, b, c;
    double root1, root2;
    double discriminant;

    printf("Enter the coefficients of quadratic equation ax^2 + bx + c\n");
    printf("Enter a: ");
    scanf("%lf", &a);
    printf("Enter b: ");
    scanf("%lf", &b);
    printf("Enter c: ");
    scanf("%lf", &c);
    

    if (a == 0) {
        printf("Error: 'a' cannot be zero!\n");
        return 1;
    }
    

    discriminant = (b * b) - (4 * a * c);
    

    if (discriminant > 0) {

        root1 = (-b + sqrt(discriminant)) / (2 * a);
        root2 = (-b - sqrt(discriminant)) / (2 * a);
        printf("Roots are real and different:\n");
        printf("Root 1 = %.2f\n", root1);
        printf("Root 2 = %.2f\n", root2);
    }
    else if (discriminant == 0) {

        root1 = -b / (2 * a);
        printf("Roots are real and same:\n");
        printf("Root = %.2f\n", root1);
    }
    else {

        printf("Roots are complex (imaginary)\n");
        printf("This means the equation has no real roots\n");
    }
    
    return 0;
}