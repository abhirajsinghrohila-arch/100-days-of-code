//Q76: Check if a matrix is symmetric.
#include <stdio.h>

int main() {
    int n, i, j;
    int is_symmetric = 1;
    
    printf("Enter size of square matrix: ");
    scanf("%d", &n);
    
    int matrix[n][n];
    
    printf("Enter elements of matrix:\n");
    for (i = 0; i < n; i++) {
        for (j = 0; j < n; j++) {
            printf("Element [%d][%d]: ", i, j);
            scanf("%d", &matrix[i][j]);
        }
    }
    
    printf("\nMatrix:\n");
    for (i = 0; i < n; i++) {
        for (j = 0; j < n; j++) {
            printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }
    
    // Check if symmetric
    for (i = 0; i < n; i++) {
        for (j = 0; j < n; j++) {
            if (matrix[i][j] != matrix[j][i]) {
                is_symmetric = 0;
                break;
            }
        }
        if (is_symmetric == 0) {
            break;
        }
    }
    
    if (is_symmetric == 1) {
        printf("Matrix is symmetric\n");
    } else {
        printf("Matrix is not symmetric\n");
    }
    
    return 0;
}


