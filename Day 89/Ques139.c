//Q139: Show that enums store integers
#include <stdio.h>

enum Priority {
    LOW = 1,
    MEDIUM = 5,
    HIGH = 10,
    CRITICAL = 20
};

int main() {
    enum Priority p1 = LOW;
    enum Priority p2 = HIGH;
    
    printf("Enums are stored as integers:\n");
    printf("LOW = %d\n", LOW);
    printf("MEDIUM = %d\n", MEDIUM);
    printf("HIGH = %d\n", HIGH);
    printf("CRITICAL = %d\n", CRITICAL);
    
    printf("\nVariable p1 = %d\n", p1);
    printf("Variable p2 = %d\n", p2);
    
    printf("\nArithmetic operations:\n");
    printf("p1 + p2 = %d\n", p1 + p2);
    printf("p2 - p1 = %d\n", p2 - p1);
    
    return 0;
}