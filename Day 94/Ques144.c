//Q144: Function that accepts structure as parameter
#include <stdio.h>

struct Student {
    char name[50];
    int roll_no;
    float marks;
};

void printStudent(struct Student s) {
    printf("\nStudent Details:\n");
    printf("Name: %s\n", s.name);
    printf("Roll Number: %d\n", s.roll_no);
    printf("Marks: %.2f\n", s.marks);
}

int main() {
    struct Student student;
    
    printf("Enter student details:\n");
    
    printf("Name: ");
    scanf("%s", student.name);
    
    printf("Roll Number: ");
    scanf("%d", &student.roll_no);
    
    printf("Marks: ");
    scanf("%f", &student.marks);
    
    // Call function to print student details
    printStudent(student);
    
    return 0;
}