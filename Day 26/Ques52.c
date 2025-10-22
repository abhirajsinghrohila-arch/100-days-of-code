//Q52: Print the specified star pattern with spaced rows (as per prompt).
#include <stdio.h>

int main() {
	int i;

	printf("*\n");
	printf("\n");
	for (i = 0; i < 3; i++) {
		printf("*\n");
	}
	printf("\n");
	for (i = 0; i < 5; i++) {
		printf("*\n");
	}
	printf("\n");
	for (i = 0; i < 3; i++) {
		printf("*\n");
	}
	printf("\n");
	printf("*\n");
	return 0;
}