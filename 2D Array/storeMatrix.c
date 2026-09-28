#include <stdio.h>
#include <stdlib.h>

int main() {
    int rows, cols;

    printf("Enter the number of rows: ");
    if (scanf("%d", &rows) != 1 || rows <= 0) {
        printf("Invalid input for rows.\n");
        return 1;
    }

    printf("Enter the number of columns: ");
    if (scanf("%d", &cols) != 1 || cols <= 0) {
        printf("Invalid input for columns.\n");
        return 1;
    }

    int **matrix = malloc(rows * sizeof(int *));
    if (!matrix) {
        printf("Memory allocation failed.\n");
        return 1;
    }

    for (int i = 0; i < rows; i++) {
        matrix[i] = malloc(cols * sizeof(int));
        if (!matrix[i]) {
            printf("Memory allocation failed.\n");
            for (int k = 0; k < i; k++) {
                free(matrix[k]);
            }
            free(matrix);
            return 1;
        }
    }

    printf("Enter the matrix elements:\n");
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            printf("matrix[%d][%d] = ", i, j);
            if (scanf("%d", &matrix[i][j]) != 1) {
                printf("Invalid input.\n");
                for (int k = 0; k < rows; k++) {
                    free(matrix[k]);
                }
                free(matrix);
                return 1;
            }
        }
    }

    printf("\nStored matrix:\n");
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }

    for (int i = 0; i < rows; i++) {
        free(matrix[i]);
    }
    free(matrix);

    return 0;
}