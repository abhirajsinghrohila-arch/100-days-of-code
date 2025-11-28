//Q130: Store and read student records
#include <stdio.h>

int main() {
    FILE *file;
    int choice, n, i;
    char name[50];
    int roll, marks;
    
    printf("Student Records Management\n");
    printf("1. Write records\n");
    printf("2. Read records\n");
    printf("Enter choice: ");
    scanf("%d", &choice);
    
    if (choice == 1) {
        file = fopen("students.txt", "w");
        
        if (file == NULL) {
            printf("Error: Could not create file!\n");
            return 1;
        }
        
        printf("Enter number of students: ");
        scanf("%d", &n);
        
        for (i = 0; i < n; i++) {
            printf("\nStudent %d:\n", i + 1);
            printf("Name: ");
            scanf("%s", name);
            printf("Roll Number: ");
            scanf("%d", &roll);
            printf("Marks: ");
            scanf("%d", &marks);
            
            fprintf(file, "%s %d %d\n", name, roll, marks);
        }
        
        fclose(file);
        printf("\nRecords saved successfully!\n");
        
    } else if (choice == 2) {
        file = fopen("students.txt", "r");
        
        if (file == NULL) {
            printf("Error: Could not open file!\n");
            return 1;
        }
        
        printf("\nStudent Records:\n");
        printf("%-20s %-15s %-10s\n", "Name", "Roll Number", "Marks");
        printf("------------------------------------------------\n");
        
        while (fscanf(file, "%s %d %d", name, &roll, &marks) == 3) {
            printf("%-20s %-15d %-10d\n", name, roll, marks);
        }
        
        fclose(file);
        
    } else {
        printf("Invalid choice!\n");
    }
    
    return 0;
}