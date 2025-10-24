#include <stdio.h>

int main() {
    char str[100];
    int count = 0;

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);  // safer than gets()

    // Loop until we reach the null character '\0'
    while (str[count] != '\0') {
        count++;
    }

    // Subtract 1 because fgets() includes the newline character
    if (str[count - 1] == '\n') {
        count--;
    }

    printf("Number of characters in the string: %d\n", count);

    return 0;
}
