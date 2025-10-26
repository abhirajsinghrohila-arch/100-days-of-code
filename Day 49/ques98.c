#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main() {
    char name[100];
    char words[10][20]; 
    int i, j = 0, k = 0, wordCount = 0;

    printf("Enter your full name: ");
    fgets(name, sizeof(name), stdin);

   
    for (i = 0; name[i] != '\0'; i++) {
        if (name[i] == ' ' || name[i] == '\n') {
            words[wordCount][j] = '\0';
            wordCount++;
            j = 0;
        } else {
            words[wordCount][j++] = name[i];
        }
    }
    if (j > 0) {
        words[wordCount][j] = '\0';
        wordCount++;
    }

    printf("Formatted name: ");

    
    for (i = 0; i < wordCount - 1; i++) {
        printf("%c. ", toupper(words[i][0]));
    }

    
    for (k = 0; words[wordCount - 1][k] != '\0'; k++) {
        if (k == 0)
            printf("%c", toupper(words[wordCount - 1][k]));
        else
            printf("%c", tolower(words[wordCount - 1][k]));
    }

    printf("\n");
    return 0;
}
