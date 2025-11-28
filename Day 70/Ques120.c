//Q120: Convert string to sentence case
#include <stdio.h>
#include <string.h>

int main() {
    char str[200];
    int i;
    int capitalize_next = 1;
    
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);
    
    printf("Original: %s", str);
    
    // Convert to sentence case
    for (i = 0; str[i] != '\0'; i++) {
        if (str[i] == ' ' || str[i] == '\t' || str[i] == '\n') {
            capitalize_next = 1;
        } else if (capitalize_next && str[i] >= 'a' && str[i] <= 'z') {
            str[i] = str[i] - 32;
            capitalize_next = 0;
        } else if (!capitalize_next && str[i] >= 'A' && str[i] <= 'Z') {
            str[i] = str[i] + 32;
        } else if (str[i] >= 'a' && str[i] <= 'z') {
            capitalize_next = 0;
        } else if (str[i] >= 'A' && str[i] <= 'Z') {
            capitalize_next = 0;
        }
    }
    
    printf("Sentence case: %s", str);
    
    return 0;
}