#include <stdio.h>
#include <ctype.h>  

int main() {
    char name[100];
    int i;

    printf("Enter your full name: ");
    fgets(name, sizeof(name), stdin);  

    printf("Initials: ");
    
    if (isalpha(name[0])) {
        printf("%c ", toupper(name[0]));
    }

    for (i = 0; name[i] != '\0'; i++) {
        
        if (name[i] == ' ' && isalpha(name[i + 1])) {
            printf("%c ", toupper(name[i + 1]));
        }
    }

    return 0;
}
