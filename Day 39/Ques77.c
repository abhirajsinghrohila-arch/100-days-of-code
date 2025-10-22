//Q77: Check if the elements on the main diagonal are distinct.
#include <stdio.h>

int main() {
    int n, i, j;
    int all_different = 1;
    
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
    
    printf("\nMain diagonal elements: ");
    for (i = 0; i < n; i++) {
        printf("%d ", matrix[i][i]);
    }
    printf("\n");
    
    // Check if all diagonal elements are different
    for (i = 0; i < n; i++) {
        for (j = i + 1; j < n; j++) {
            if (matrix[i][i] == matrix[j][j]) {
                all_different = 0;
                break;
            }
        }
        if (all_different == 0) {
            break;
        }
    }
    
    if (all_different == 1) {
        printf("All diagonal elements are distinct\n");
    } else {
        printf("Diagonal elements are not distinct\n");
    }
    
    return 0;
}


