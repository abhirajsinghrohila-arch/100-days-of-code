//Q10: Convert seconds to hh:mm:ss format.
#include <stdio.h>

int main() {
    int total_seconds, hours, minutes, seconds;

    printf("Enter time in seconds: ");
    scanf("%d", &total_seconds);

    hours = total_seconds / 3600;
    minutes = (total_seconds % 3600) / 60;
    seconds = total_seconds % 60;

    printf("%d seconds = %02d:%02d:%02d (hh:mm:ss)\n", total_seconds, hours, minutes, seconds);

    return 0;
}
