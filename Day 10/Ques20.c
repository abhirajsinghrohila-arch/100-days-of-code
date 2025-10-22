//Q20: Write a program to display the day of the week based on a number (1–7) using switch-case.
#include <stdio.h>

int main() {
    int dayNumber;
    
    printf("Enter a number (1-7) to get the day of the week:\n");
    printf("1 = Monday, 2 = Tuesday, 3 = Wednesday, 4 = Thursday\n");
    printf("5 = Friday, 6 = Saturday, 7 = Sunday\n");
    printf("Enter your choice: ");
    scanf("%d", &dayNumber);
    

    switch (dayNumber) {
        case 1:
            printf("Monday\n");
            break;
        case 2:
            printf("Tuesday\n");
            break;
        case 3:
            printf("Wednesday\n");
            break;
        case 4:
            printf("Thursday\n");
            break;
        case 5:
            printf("Friday\n");
            break;
        case 6:
            printf("Saturday\n");
            break;
        case 7:
            printf("Sunday\n");
            break;
        default:
            printf("Invalid input! Please enter a number between 1 and 7.\n");
            break;
    }
    
    return 0;
}

//
