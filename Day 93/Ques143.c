//Q143: Find and print student with highest marks
#include <stdio.h>

struct Student {
    char name[50];
    int roll_no;
    float marks;
};

int main() {
    struct Student students[5];
    int i, max_index = 0;
    
    printf("Enter details of 5 students:\n");
    
    for (i = 0; i < 5; i++) {
        printf("\nStudent %d:\n", i + 1);
        
        printf("Name: ");
        scanf("%s", students[i].name);
        
        printf("Roll Number: ");
        scanf("%d", &students[i].roll_no);
        
        printf("Marks: ");
        scanf("%f", &students[i].marks);
    }
    
    // Find student with highest marks
    for (i = 1; i < 5; i++) {
        if (students[i].marks > students[max_index].marks) {
            max_index = i;
        }
    }
    
    printf("\n\nStudent with Highest Marks:\n");
    printf("Name: %s\n", students[max_index].name);
    printf("Roll Number: %d\n", students[max_index].roll_no);
    printf("Marks: %.2f\n", students[max_index].marks);
    
    return 0;
}