//Q72: Find the sum of all elements in a matrix.
#include <stdio.h>

int main() {
    int rows, cols, i, j, sum = 0;
    
    printf("Enter number of rows and columns: ");
    scanf("%d %d", &rows, &cols);
    
    int matrix[rows][cols];
    
    printf("Enter elements of matrix:\n");
    for (i = 0; i < rows; i++) {
        for (j = 0; j < cols; j++) {
            printf("Element [%d][%d]: ", i, j);
            scanf("%d", &matrix[i][j]);
        }
    }
    
    printf("\nMatrix:\n");
    for (i = 0; i < rows; i++) {
        for (j = 0; j < cols; j++) {
            printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }
    
    // Calculate sum
    for (i = 0; i < rows; i++) {
        for (j = 0; j < cols; j++) {
            sum = sum + matrix[i][j];
        }
    }
    
    printf("Sum of all elements: %d\n", sum);
    
    return 0;
}
