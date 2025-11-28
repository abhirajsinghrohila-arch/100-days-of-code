//Q124: Copy file contents
#include <stdio.h>

int main() {
    FILE *source, *destination;
    char source_file[50], dest_file[50];
    char ch;
    
    printf("Enter source filename: ");
    scanf("%s", source_file);
    
    printf("Enter destination filename: ");
    scanf("%s", dest_file);
    
    source = fopen(source_file, "r");
    if (source == NULL) {
        printf("Error: Could not open source file!\n");
        return 1;
    }
    
    destination = fopen(dest_file, "w");
    if (destination == NULL) {
        printf("Error: Could not create destination file!\n");
        fclose(source);
        return 1;
    }
    
    while ((ch = fgetc(source)) != EOF) {
        fputc(ch, destination);
    }
    
    printf("\nFile copied successfully from %s to %s!\n", source_file, dest_file);
    
    fclose(source);
    fclose(destination);
    
    return 0;
}