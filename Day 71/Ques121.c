//Q121: Create file and write user data
#include <stdio.h>

int main() {
    FILE *file;
    char name[50];
    int age;
    
    printf("Enter your name: ");
    fgets(name, sizeof(name), stdin);
    
    printf("Enter your age: ");
    scanf("%d", &age);
    
    file = fopen("info.txt", "w");
    
    if (file == NULL) {
        printf("Error: Could not create file!\n");
        return 1;
    }
    
    fprintf(file, "Name: %s", name);
    fprintf(file, "Age: %d\n", age);
    
    fclose(file);
    
    printf("\nData successfully saved to info.txt!\n");
    
    return 0;
}