//Q56: Read and print elements of a one-dimensional array.
#include <stdio.h>
#include <stdlib.h>

int main() {
	int n, i;
	if (scanf("%d", &n) != 1) return 0;
	if (n <= 0) return 0;
	int *arr = (int *)malloc((size_t)n * sizeof(int));
	if (!arr) return 0;
	for (i = 0; i < n; i++) {
		if (scanf("%d", &arr[i]) != 1) {
			free(arr);
			return 0;
		}
	}
	for (i = 0; i < n; i++) {
		printf("%d", arr[i]);
		if (i + 1 < n) printf(" ");
	}
	printf("\n");
	free(arr);
	return 0;
}
