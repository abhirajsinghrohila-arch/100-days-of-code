//Q21: Print month name and number of days for a given month number.
#include <stdio.h>

int main() {
    int monthNumber;

    printf("Enter month number (1-12): ");
    scanf("%d", &monthNumber);

    if (monthNumber < 1 || monthNumber > 12) {
        printf("Invalid month number! Please enter a number between 1 and 12.\n");
        return 0;
    }

    switch (monthNumber) {
        case 1:
            printf("January - 31 days\n");
            break;
        case 2:
            printf("February - 28 or 29 days\n");
            break;
        case 3:
            printf("March - 31 days\n");
            break;
        case 4:
            printf("April - 30 days\n");
            break;
        case 5:
            printf("May - 31 days\n");
            break;
        case 6:
            printf("June - 30 days\n");
            break;
        case 7:
            printf("July - 31 days\n");
            break;
        case 8:
            printf("August - 31 days\n");
            break;
        case 9:
            printf("September - 30 days\n");
            break;
        case 10:
            printf("October - 31 days\n");
            break;
        case 11:
            printf("November - 30 days\n");
            break;
        case 12:
            printf("December - 31 days\n");
            break;
    }

    return 0;
}
