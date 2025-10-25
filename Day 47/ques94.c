#include <stdio.h>
#include <string.h>

int main() {
    char str[200], word[50], longest[50];
    int i = 0, j = 0, maxLen = 0, len = 0;

    printf("Enter a sentence: ");
    gets(str);  

    while (str[i] != '\0') {
        if (str[i] != ' ' && str[i] != '\n' && str[i] != '\t') {
            word[j++] = str[i];
        } else {
            word[j] = '\0';  
            len = strlen(word);
            if (len > maxLen) {
                maxLen = len;
                strcpy(longest, word);
            }
            j = 0;  
        }
        i++;
    }

    
    word[j] = '\0';
    len = strlen(word);
    if (len > maxLen) {
        maxLen = len;
        strcpy(longest, word);
    }

    printf("The longest word is: %s", longest);
    printf("\nLength: %d", maxLen);

    return 0;
}
