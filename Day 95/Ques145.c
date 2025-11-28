//Q145: Return structure from function - top student
#include <stdio.h>

struct Student {
    char name[50];
    int roll_no;
    float marks;
};

struct Student findTopStudent(struct Student students[], int n) {
    int max_index = 0;
    
    for (int i = 1; i < n; i++) {
        if (students[i].marks > students[max_index].marks) {
            max_index = i;
        }
    }
    
    return students[max_index];
}

int main() {
    struct Student students[3];
    int i;
    
    printf("Enter details of 3 students:\n");
    
    for (i = 0; i < 3; i++) {
        printf("\nStudent %d:\n", i + 1);
        
        printf("Name: ");
        scanf("%s", students[i].name);
        
        printf("Roll Number: ");
        scanf("%d", &students[i].roll_no);
        
        printf("Marks: ");
        scanf("%f", &students[i].marks);
    }
    
    // Get top student
    struct Student topStudent = findTopStudent(students, 3);
    
    printf("\n\nTop Student:\n");
    printf("Name: %s\n", topStudent.name);
    printf("Roll Number: %d\n", topStudent.roll_no);
    printf("Marks: %.2f\n", topStudent.marks);
    
    return 0;
}