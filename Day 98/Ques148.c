//Q148: Check if two structures are identical
#include <stdio.h>
#include <string.h>

struct Student {
    char name[50];
    int roll_no;
    float marks;
};

int areStudentsIdentical(struct Student s1, struct Student s2) {
    if (strcmp(s1.name, s2.name) == 0 && 
        s1.roll_no == s2.roll_no && 
        s1.marks == s2.marks) {
        return 1;
    }
    return 0;
}

int main() {
    struct Student student1, student2;
    
    printf("Enter details of first student:\n");
    printf("Name: ");
    scanf("%s", student1.name);
    printf("Roll Number: ");
    scanf("%d", &student1.roll_no);
    printf("Marks: ");
    scanf("%f", &student1.marks);
    
    printf("\nEnter details of second student:\n");
    printf("Name: ");
    scanf("%s", student2.name);
    printf("Roll Number: ");
    scanf("%d", &student2.roll_no);
    printf("Marks: ");
    scanf("%f", &student2.marks);
    
    printf("\nStudent 1:\n");
    printf("Name: %s, Roll: %d, Marks: %.2f\n", 
           student1.name, student1.roll_no, student1.marks);
    
    printf("\nStudent 2:\n");
    printf("Name: %s, Roll: %d, Marks: %.2f\n", 
           student2.name, student2.roll_no, student2.marks);
    
    if (areStudentsIdentical(student1, student2)) {
        printf("\nThe two students are IDENTICAL\n");
    } else {
        printf("\nThe two students are NOT identical\n");
    }
    
    return 0;
}