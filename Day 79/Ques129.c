//Q129: Calculate sum and average from file
#include <stdio.h>

int main() {
    FILE *file;
    int num, count = 0, sum = 0;
    float average;
    
    file = fopen("numbers.txt", "r");
    
    if (file == NULL) {
        printf("Error: Could not open numbers.txt!\n");
        return 1;
    }
    
    printf("Reading numbers from numbers.txt...\n");
    
    while (fscanf(file, "%d", &num) == 1) {
        sum += num;
        count++;
    }
    
    fclose(file);
    
    if (count == 0) {
        printf("No numbers found in file!\n");
        return 1;
    }
    
    average = (float)sum / count;
    
    printf("Count: %d\n", count);
    printf("Sum: %d\n", sum);
    printf("Average: %.2f\n", average);
    
    return 0;
}