#include <stdio.h>
#include <string.h>

void reverseWord(char *start, char *end) {
    char temp;
    while (start < end) {
        temp = *start;
        *start = *end;
        *end = temp;
        start++;
        end--;
    }
}

int main() {
    char str[200];
    char *wordStart = NULL;
    int i = 0;

    printf("Enter a sentence: ");
    gets(str);  

    while (1) {
        if (str[i] == ' ' || str[i] == '\0') {
            if (wordStart) {
                reverseWord(wordStart, &str[i - 1]);
                wordStart = NULL;
            }
            if (str[i] == '\0')
                break;
        } else if (wordStart == NULL) {
            wordStart = &str[i];
        }
        i++;
    }

    printf("Sentence after reversing each word:\n%s", str);

    return 0;
}
