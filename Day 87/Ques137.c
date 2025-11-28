//Q137: Enum for user roles
#include <stdio.h>

enum Role {
    ADMIN,
    USER,
    GUEST
};

int main() {
    enum Role role;
    
    printf("Enter role (0=ADMIN, 1=USER, 2=GUEST): ");
    scanf("%d", &role);
    
    switch(role) {
        case ADMIN:
            printf("Welcome Admin! You have full access.\n");
            break;
        case USER:
            printf("Welcome User! You have limited access.\n");
            break;
        case GUEST:
            printf("Welcome Guest! You have read-only access.\n");
            break;
        default:
            printf("Invalid role\n");
    }
    
    return 0;
}