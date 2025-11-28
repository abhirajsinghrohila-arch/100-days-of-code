//Q125: Append text to file
#include <stdio.h>

int main() {
    FILE *file;
    char filename[50];
    char text[200];
    
    printf("Enter filename: ");
    scanf("%s", filename);
    getchar();
    
    printf("Enter text to append: ");
    fgets(text, sizeof(text), stdin);
    
    file = fopen(filename, "a");
    
    if (file == NULL) {
        printf("Error: Could not open file!\n");
        return 1;
    }
    
    fprintf(file, "%s", text);
    
    fclose(file);
    
    printf("\nText successfully appended to %s!\n", filename);
    
    return 0;
}