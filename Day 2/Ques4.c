//Q4: Write a program to input the radius of a circle and calculate its area and circumference.
#include <stdio.h>
#define PI 3.14159

int main() {
	float radius, area, circumference;

	printf("Enter the radius of the circle: ");
	scanf("%f", &radius);

	area = PI * radius * radius;
	circumference = 2 * PI * radius;

	printf("Area of the circle: %.2f\n", area);
	printf("Circumference of the circle: %.2f\n", circumference);

	return 0;
}
