//Q53: Print the diamond-like star pattern with peak at 9 stars.
#include <stdio.h>

int main() {
	int i, j, stars;
	int n = 5; // peak row has 2*n-1 stars
	for (i = 1; i <= n; i++) {
		stars = 2 * i - 1;
		for (j = 0; j < stars; j++) {
			printf("*");
		}
		printf("\n");
	}
	for (i = n - 1; i >= 1; i--) {
		stars = 2 * i - 1;
		for (j = 0; j < stars; j++) {
			printf("*");
		}
		printf("\n");
	}
	return 0;
}