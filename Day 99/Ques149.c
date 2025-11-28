//Q149: Dynamic memory allocation for structures using malloc()
#include <stdio.h>
#include <stdlib.h>

struct Student {
    char name[50];
    int roll_no;
    float marks;
};

int main() {
    struct Student *student;
    
    // Allocate memory dynamically for one student
    student = (struct Student *)malloc(sizeof(struct Student));
    
    if (student == NULL) {
        printf("Memory allocation failed!\n");
        return 1;
    }
    
    printf("Memory allocated successfully for student structure\n");
    printf("Size of structure: %lu bytes\n\n", sizeof(struct Student));
    
    printf("Enter student details:\n");
    
    printf("Name: ");
    scanf("%s", student->name);
    
    printf("Roll Number: ");
    scanf("%d", &student->roll_no);
    
    printf("Marks: ");
    scanf("%f", &student->marks);
    
    printf("\nStudent Details:\n");
    printf("Name: %s\n", student->name);
    printf("Roll Number: %d\n", student->roll_no);
    printf("Marks: %.2f\n", student->marks);
    
    // Free allocated memory
    free(student);
    printf("\nMemory freed successfully!\n");
    
    return 0;
}