//Q140: Struct with enum Gender
#include <stdio.h>

enum Gender {
    MALE,
    FEMALE,
    OTHER
};

struct Person {
    char name[50];
    int age;
    enum Gender gender;
};

int main() {
    struct Person person;
    
    printf("Enter name: ");
    scanf("%s", person.name);
    
    printf("Enter age: ");
    scanf("%d", &person.age);
    
    printf("Enter gender (0=MALE, 1=FEMALE, 2=OTHER): ");
    scanf("%d", &person.gender);
    
    printf("\nPerson Details:\n");
    printf("Name: %s\n", person.name);
    printf("Age: %d\n", person.age);
    printf("Gender: ");
    
    switch(person.gender) {
        case MALE:
            printf("Male\n");
            break;
        case FEMALE:
            printf("Female\n");
            break;
        case OTHER:
            printf("Other\n");
            break;
    }
    
    return 0;
}