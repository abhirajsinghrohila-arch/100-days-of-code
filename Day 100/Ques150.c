//Q150: Use pointer to struct with -> operator
#include <stdio.h>

struct Student {
    char name[50];
    int roll_no;
    float marks;
};

int main() {
    struct Student student;
    struct Student *ptr;
    
    // Point to the student structure
    ptr = &student;
    
    printf("Enter student details:\n");
    
    printf("Name: ");
    scanf("%s", ptr->name);
    
    printf("Roll Number: ");
    scanf("%d", &ptr->roll_no);
    
    printf("Marks: ");
    scanf("%f", &ptr->marks);
    
    printf("\nOriginal Student Details:\n");
    printf("Name: %s\n", ptr->name);
    printf("Roll Number: %d\n", ptr->roll_no);
    printf("Marks: %.2f\n", ptr->marks);
    
    // Modify data using pointer
    printf("\nModifying marks...\n");
    ptr->marks = ptr->marks + 5.0;
    
    printf("\nModified Student Details:\n");
    printf("Name: %s\n", ptr->name);
    printf("Roll Number: %d\n", ptr->roll_no);
    printf("Marks: %.2f\n", ptr->marks);
    
    printf("\nDemonstrating -> vs . operator:\n");
    printf("Using -> operator: ptr->name = %s\n", ptr->name);
    printf("Using . operator: student.name = %s\n", student.name);
    printf("Both access the same data!\n");
    
    return 0;
}