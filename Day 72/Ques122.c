//Q122: Read file contents using fgets()
#include <stdio.h>

int main() {
    FILE *file;
    char line[200];
    
    file = fopen("info.txt", "r");
    
    if (file == NULL) {
        printf("Error: Could not open file!\n");
        return 1;
    }
    
    printf("Contents of info.txt:\n");
    printf("---------------------\n");
    
    while (fgets(line, sizeof(line), file) != NULL) {
        printf("%s", line);
    }
    
    printf("---------------------\n");
    
    fclose(file);
    
    return 0;
}