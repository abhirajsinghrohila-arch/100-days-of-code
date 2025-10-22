//Q78: Find the sum of main diagonal elements for a square matrix.
#include <stdio.h>

int main() {
    int n, i, j, sum = 0;
    
    printf("Enter the size of square matrix: ");
    scanf("%d", &n);
    
    int matrix[n][n];
    
    printf("Enter elements of the matrix:\n");
    for (i = 0; i < n; i++) {
        for (j = 0; j < n; j++) {
            printf("Element [%d][%d]: ", i, j);
            scanf("%d", &matrix[i][j]);
        }
    }
    
    printf("\nMatrix:\n");
    for (i = 0; i < n; i++) {
        for (j = 0; j < n; j++) {
            printf("%4d ", matrix[i][j]);
        }
        printf("\n");
    }
    
    // Calculate sum of main diagonal elements
    for (i = 0; i < n; i++) {
        sum += matrix[i][i];
    }
    
    printf("\nMain diagonal elements: ");
    for (i = 0; i < n; i++) {
        printf("%d ", matrix[i][i]);
    }
    
    printf("\nSum of main diagonal elements: %d\n", sum);
    
    return 0;
}