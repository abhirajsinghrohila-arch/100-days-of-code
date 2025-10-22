//Q75: Add two matrices.
#include <stdio.h>

int main() {
    int rows, cols, i, j;
    
    printf("Enter number of rows and columns: ");
    scanf("%d %d", &rows, &cols);
    
    int matrix1[rows][cols];
    int matrix2[rows][cols];
    int sum[rows][cols];
    
    printf("Enter elements of first matrix:\n");
    for (i = 0; i < rows; i++) {
        for (j = 0; j < cols; j++) {
            printf("Element [%d][%d]: ", i, j);
            scanf("%d", &matrix1[i][j]);
        }
    }
    
    printf("Enter elements of second matrix:\n");
    for (i = 0; i < rows; i++) {
        for (j = 0; j < cols; j++) {
            printf("Element [%d][%d]: ", i, j);
            scanf("%d", &matrix2[i][j]);
        }
    }
    
    // Add matrices
    for (i = 0; i < rows; i++) {
        for (j = 0; j < cols; j++) {
            sum[i][j] = matrix1[i][j] + matrix2[i][j];
        }
    }
    
    printf("\nFirst Matrix:\n");
    for (i = 0; i < rows; i++) {
        for (j = 0; j < cols; j++) {
            printf("%d ", matrix1[i][j]);
        }
        printf("\n");
    }
    
    printf("\nSecond Matrix:\n");
    for (i = 0; i < rows; i++) {
        for (j = 0; j < cols; j++) {
            printf("%d ", matrix2[i][j]);
        }
        printf("\n");
    }
    
    printf("\nSum Matrix:\n");
    for (i = 0; i < rows; i++) {
        for (j = 0; j < cols; j++) {
            printf("%d ", sum[i][j]);
        }
        printf("\n");
    }
    
    return 0;
}


