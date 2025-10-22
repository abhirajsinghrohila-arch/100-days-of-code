//Q24: Calculate electricity bill using unit slabs: 100@5, next100@7, next100@10, above@12.
#include <stdio.h>

#define MAX(a, b) ((a) > (b) ? (a) : (b))
#define MIN(a, b) ((a) < (b) ? (a) : (b))

int main() {
    int units;
    float bill;

    printf("Enter the number of units consumed: ");
    scanf("%d", &units);

    if (units <= 0) {
        printf("Invalid input! Units should be greater than 0.\n");
        return 1;
    }

    bill = 5 * MIN(units, 100)
         + 7 * MIN(MAX(units - 100, 0), 100)
         + 10 * MIN(MAX(units - 200, 0), 100)
         + 12 * MAX(units - 300, 0);

    printf("Total Electricity Bill: ₹%.2f\n", bill);

    return 0;
}
