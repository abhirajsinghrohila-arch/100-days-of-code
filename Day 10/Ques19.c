//Q19: Write a program to classify a triangle as Equilateral, Isosceles, or Scalene based on its side lengths.
#include <stdio.h>

int main() {
    int side1, side2, side3;
    
    printf("Enter the three sides of the triangle:\n");
    printf("Side 1: ");
    scanf("%d", &side1);
    printf("Side 2: ");
    scanf("%d", &side2);
    printf("Side 3: ");
    scanf("%d", &side3);
    

    if (side1 <= 0 || side2 <= 0 || side3 <= 0) {
        printf("Error: Sides must be positive numbers!\n");
        return 1;
    }
    

    if (side1 + side2 <= side3 || side2 + side3 <= side1 || side1 + side3 <= side2) {
        printf("Error: These sides cannot form a triangle!\n");
        return 1;
    }
    
    
    if (side1 == side2 && side2 == side3) {
        printf("Equilateral\n");
    }
    else if (side1 == side2 || side2 == side3 || side1 == side3) {
        printf("Isosceles\n");
    }
    else {
        printf("Scalene\n");
    }
    
    return 0;
}
