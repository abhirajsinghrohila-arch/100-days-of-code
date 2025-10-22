//Q51: Print the right-aligned increasing triangle ending at 12345.
#include <stdio.h>

int main() {
	int i, j, spaces;
	for (i = 5; i >= 1; i--) {
		spaces = i - 1;
		for (j = 0; j < spaces; j++) {
			printf(" ");
		}
		for (j = i; j <= 5; j++) {
			printf("%d", j);
		}
		printf("\n");
	}
	return 0;
}