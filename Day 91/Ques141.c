//Q141: Structure Student - read and print one student
#include <stdio.h>

struct Student {
    char name[50];
    int roll_no;
    float marks;
};

int main() {
    struct Student student;
    
    printf("Enter student details:\n");
    
    printf("Name: ");
    scanf("%s", student.name);
    
    printf("Roll Number: ");
    scanf("%d", &student.roll_no);
    
    printf("Marks: ");
    scanf("%f", &student.marks);
    
    printf("\nStudent Details:\n");
    printf("Name: %s\n", student.name);
    printf("Roll Number: %d\n", student.roll_no);
    printf("Marks: %.2f\n", student.marks);
    
    return 0;
}