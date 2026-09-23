#include <stdio.h>
#include <stdlib.h>

int main() {
    int rows, cols;
    printf("Enter rows and columns: ");
    if (scanf("%d %d", &rows, &cols) != 2 || rows <= 0 || cols <= 0) {
        printf("Invalid dimensions.\n");
        return 1;
    }

    int **a = malloc(rows * sizeof(int *));
    int **b = malloc(rows * sizeof(int *));
    int **sum = malloc(rows * sizeof(int *));
    if (!a || !b || !sum) {
        printf("Memory allocation failed.\n");
        return 1;
    }

    for (int i = 0; i < rows; i++) {
        a[i] = malloc(cols * sizeof(int));
        b[i] = malloc(cols * sizeof(int));
        sum[i] = malloc(cols * sizeof(int));
        if (!a[i] || !b[i] || !sum[i]) {
            printf("Memory allocation failed.\n");
            return 1;
        }
    }

    printf("Enter elements of first matrix:\n");
    for (int i = 0; i < rows; i++)
        for (int j = 0; j < cols; j++)
            if (scanf("%d", &a[i][j]) != 1) {
                printf("Invalid input.\n");
                return 1;
            }

    printf("Enter elements of second matrix:\n");
    for (int i = 0; i < rows; i++)
        for (int j = 0; j < cols; j++)
            if (scanf("%d", &b[i][j]) != 1) {
                printf("Invalid input.\n");
                return 1;
            }

    for (int i = 0; i < rows; i++)
        for (int j = 0; j < cols; j++)
            sum[i][j] = a[i][j] + b[i][j];

    printf("Sum matrix:\n");
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++)
            printf("%d ", sum[i][j]);
        printf("\n");
    }

    for (int i = 0; i < rows; i++) {
        free(a[i]);
        free(b[i]);
        free(sum[i]);
    }
    free(a);
    free(b);
    free(sum);
    return 0;
}