#include <stdio.h>
#include <stdlib.h>

#define MAX_ROWS 100
#define MAX_COLS 100

void dfs(int matrix[MAX_ROWS][MAX_COLS], int visited[MAX_ROWS][MAX_COLS], int rows, int cols, int r, int c) {
    if (r < 0 || r >= rows || c < 0 || c >= cols) return;
    if (visited[r][c] || matrix[r][c] == 0) return;

    visited[r][c] = 1;

    dfs(matrix, visited, rows, cols, r + 1, c);
    dfs(matrix, visited, rows, cols, r - 1, c);
    dfs(matrix, visited, rows, cols, r, c + 1);
    dfs(matrix, visited, rows, cols, r, c - 1);
}

int countIslands(int matrix[MAX_ROWS][MAX_COLS], int rows, int cols) {
    int visited[MAX_ROWS][MAX_COLS] = {0};
    int count = 0;

    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            if (matrix[i][j] == 1 && !visited[i][j]) {
                dfs(matrix, visited, rows, cols, i, j);
                count++;
            }
        }
    }
    return count;
}

void printMatrix(int matrix[MAX_ROWS][MAX_COLS], int rows, int cols) {
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }
}

int main() {
    int matrix[MAX_ROWS][MAX_COLS];
    int rows, cols;

    printf("Enter number of rows and columns: ");
    scanf("%d %d", &rows, &cols);

    if (rows > MAX_ROWS || cols > MAX_COLS) {
        printf("Matrix size exceeds maximum allowed (%dx%d)\n", MAX_ROWS, MAX_COLS);
        return 1;
    }

    printf("Enter matrix elements (0 or 1):\n");
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }

    printf("\nMatrix:\n");
    printMatrix(matrix, rows, cols);

    int islands = countIslands(matrix, rows, cols);
    printf("\nNumber of islands (connected components of 1s): %d\n", islands);

    return 0;
}