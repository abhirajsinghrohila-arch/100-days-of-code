//Q14: Classify a character as vowel, consonant, or non-alphabet.
#include <stdio.h>

int main() {
	char ch;

	printf("Enter a character: ");
	scanf(" %c", &ch);

	
	char lower = ch;
	if (ch >= 'A' && ch <= 'Z') {
		lower = ch + ('a' - 'A');
	}

	if (lower == 'a' || lower == 'e' || lower == 'i' || lower == 'o' || lower == 'u') {
		printf("%c is a vowel.\n", ch);
	} else if ((lower >= 'a' && lower <= 'z')) {
		printf("%c is a consonant.\n", ch);
	} else {
		printf("%c is not an alphabet character.\n", ch);
	}

	return 0;
}
