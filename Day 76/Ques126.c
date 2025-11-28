//Q126: Check if file exists and display contents
#include <stdio.h>

int main() {
    FILE *file;
    char filename[50];
    char line[200];
    
    printf("Enter filename: ");
    scanf("%s", filename);
    
    file = fopen(filename, "r");
    
    if (file == NULL) {
        printf("Error: File does not exist!\n");
        return 1;
    }
    
    printf("File opened successfully.\n");
    printf("\nFile contents:\n");
    printf("---------------------\n");
    
    while (fgets(line, sizeof(line), file) != NULL) {
        printf("%s", line);
    }
    
    printf("---------------------\n");
    
    fclose(file);
    
    return 0;
}