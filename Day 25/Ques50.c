//Q50: Print the inverted right-aligned triangle of asterisks.
#include <stdio.h>

int main() {
	int i, j, spaces, stars;
	for (i = 0; i < 5; i++) {
		spaces = i;
		stars = 5 - i;
		for (j = 0; j < spaces; j++) {
			printf(" ");
		}
		for (j = 0; j < stars; j++) {
			printf("*");
		}
		printf("\n");
	}
	return 0;
}