//Q7: Swap two numbers without using a temporary variable.
#include <stdio.h>

int main() {
	int a, b;


	printf("Enter first number (a): ");
	scanf("%d", &a);
	printf("Enter second number (b): ");
	scanf("%d", &b);


	a = a + b;
	b = a - b;
	a = a - b;

	printf("After swapping, a = %d, b = %d\n", a, b);

	return 0;
}
