//Q23: Calculate library fine based on late days with slab rates; >30 cancel.
#include <stdio.h>

int main() {
    int lateDays;
    int fine = 0;

    printf("Enter the number of late days: ");
    scanf("%d", &lateDays);

    if (lateDays <= 0) {
        printf("No fine. Book returned on time.\n");
        return 0;
    }

    if (lateDays > 30) {
        printf("Membership Cancelled.\n");
        return 0;
    }

    int remaining = lateDays;

    int take = remaining;
    if (take > 5) take = 5;
    fine += take * 2;
    remaining -= take;

    if (remaining > 0) {
        take = remaining;
        if (take > 5) take = 5;
        fine += take * 4;
        remaining -= take;
    }

    if (remaining > 0) {
        fine += remaining * 6;
    }

    printf("Fine: ₹%d\n", fine);

    return 0;
}
