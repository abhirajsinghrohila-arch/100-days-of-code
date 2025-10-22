//Q73: Find the sum of each row of a matrix and store it in an array.
#include <stdio.h>

int main() {
    int rows, cols, i, j;
    
    printf("Enter number of rows and columns: ");
    scanf("%d %d", &rows, &cols);
    
    int matrix[rows][cols];
    int row_sum[rows];
    
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
    
    // Calculate sum of each row
    for (i = 0; i < rows; i++) {
        row_sum[i] = 0;
        for (j = 0; j < cols; j++) {
            row_sum[i] = row_sum[i] + matrix[i][j];
        }
    }
    
    printf("\nSum of each row:\n");
    for (i = 0; i < rows; i++) {
        printf("Row %d sum: %d\n", i, row_sum[i]);
    }
    
    return 0;
}
