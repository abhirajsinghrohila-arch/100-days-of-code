//Q147: Store and read employee data using binary file operations
#include <stdio.h>

struct Employee {
    char name[50];
    int emp_id;
    float salary;
};

int main() {
    FILE *file;
    struct Employee emp;
    int choice, n, i;
    
    printf("Employee Binary File Operations\n");
    printf("1. Write employee data to file\n");
    printf("2. Read employee data from file\n");
    printf("Enter choice: ");
    scanf("%d", &choice);
    
    if (choice == 1) {
        // Write to binary file
        file = fopen("employees.dat", "wb");
        
        if (file == NULL) {
            printf("Error: Could not create file!\n");
            return 1;
        }
        
        printf("Enter number of employees: ");
        scanf("%d", &n);
        
        for (i = 0; i < n; i++) {
            printf("\nEmployee %d:\n", i + 1);
            
            printf("Name: ");
            scanf("%s", emp.name);
            
            printf("Employee ID: ");
            scanf("%d", &emp.emp_id);
            
            printf("Salary: ");
            scanf("%f", &emp.salary);
            
            // Write structure to binary file
            fwrite(&emp, sizeof(struct Employee), 1, file);
        }
        
        fclose(file);
        printf("\nEmployee data saved successfully to employees.dat!\n");
        
    } else if (choice == 2) {
        // Read from binary file
        file = fopen("employees.dat", "rb");
        
        if (file == NULL) {
            printf("Error: Could not open file!\n");
            return 1;
        }
        
        printf("\nEmployee Records:\n");
        printf("%-20s %-15s %-10s\n", "Name", "Employee ID", "Salary");
        printf("------------------------------------------------\n");
        
        // Read structures from binary file
        while (fread(&emp, sizeof(struct Employee), 1, file) == 1) {
            printf("%-20s %-15d %-10.2f\n", emp.name, emp.emp_id, emp.salary);
        }
        
        fclose(file);
        
    } else {
        printf("Invalid choice!\n");
    }
    
    return 0;
}