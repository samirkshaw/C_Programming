#include <stdio.h>
#include <stdlib.h>

int main() {
    int rows, cols;

    printf("Enter the number of rows = ");
    if (scanf("%d", &rows) != 1 || rows <= 0) {
        printf("Invalid input for rows.\n");
        return 1;
    }

    printf("Enter the number of columns = ");
    if (scanf("%d", &cols) != 1 || cols <= 0) {
        printf("Invalid input for columns.\n");
        return 1;
    }

    int **arr = malloc(rows * sizeof(int *));
    if (!arr) {
        printf("Memory allocation failed.\n");
        return 1;
    }

    for (int i = 0; i < rows; i++) {
        arr[i] = malloc(cols * sizeof(int));
        if (!arr[i]) {
            printf("Memory allocation failed.\n");
            for (int k = 0; k < i; k++) {
                free(arr[k]);
            }
            free(arr);
            return 1;
        }
    }

    int sum = 0;
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            printf("arr[%d][%d] = ", i, j);
            if (scanf("%d", &arr[i][j]) != 1) {
                printf("Invalid input.\n");
                for (int k = 0; k < rows; k++) {
                    free(arr[k]);
                }
                free(arr);
                return 1;
            }
            sum += arr[i][j];
        }
        printf("\n");
    }

    printf("The sum of the elements of the matrix is %d.\n", sum);

    for (int i = 0; i < rows; i++) {
        free(arr[i]);
    }
    free(arr);

    return 0;
}