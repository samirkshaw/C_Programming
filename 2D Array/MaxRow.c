#include <stdio.h>

int main() {
    int n, m;
    printf("Enter the number of rows = ");
    scanf("%d", &n);
    printf("Enter the number of columns = ");
    scanf("%d", &m);
    
    int arr[n][m];
    
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            printf("arr[%d][%d] = ", i, j);
            scanf("%d", &arr[i][j]);
        }
    }
    
    int maxSum = -2147483648;
    int maxRow = 0;
    
    for (int i = 0; i < n; i++) {
        int sum = 0;
        for (int j = 0; j < m; j++) {
            sum += arr[i][j];
        }
        printf("Sum of row %d = %d\n", i, sum);
        if (sum > maxSum) {
            maxSum = sum;
            maxRow = i;
        }
    }
    
    printf("\nRow with maximum sum: Row %d (sum = %d)\n", maxRow, maxSum);
    
    return 0;
}