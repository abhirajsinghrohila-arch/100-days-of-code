//Q55: Print all the prime numbers from 1 to n.
#include <stdio.h>

int main() {
	int n;
	int i, d, isPrime;
	if (scanf("%d", &n) != 1) {
		return 0;
	}
	for (i = 2; i <= n; i++) {
		isPrime = 1;
		for (d = 2; d * d <= i; d++) {
			if (i % d == 0) {
				isPrime = 0;
				break;
			}
		}
		if (isPrime) {
			printf("%d\n", i);
		}
	}
	return 0;
}
