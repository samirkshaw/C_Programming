#include <stdio.h>
#include <stdlib.h>

int main() {
    int n;
    printf("Enter the size of square matrix (n): ");
    scanf("%d", &n);

    int **matrix = (int **)malloc(n * sizeof(int *));
    for (int i = 0; i < n; i++) {
        matrix[i] = (int *)malloc(n * sizeof(int));
    }

    int top = 0, bottom = n - 1, left = 0, right = n - 1;
    int val = 1;

    while (val <= n * n) {
        for (int j = left; j <= right && val <= n * n; j++) {
            matrix[top][j] = val++;
        }
        top++;

        for (int i = top; i <= bottom && val <= n * n; i++) {
            matrix[i][right] = val++;
        }
        right--;

        for (int j = right; j >= left && val <= n * n; j--) {
            matrix[bottom][j] = val++;
        }
        bottom--;

        for (int i = bottom; i >= top && val <= n * n; i--) {
            matrix[i][left] = val++;
        }
        left++;
    }

    printf("\nSpiral Matrix (%dx%d):\n", n, n);
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            printf("%4d", matrix[i][j]);
        }
        printf("\n");
    }

    for (int i = 0; i < n; i++) {
        free(matrix[i]);
    }
    free(matrix);

    return 0;
}