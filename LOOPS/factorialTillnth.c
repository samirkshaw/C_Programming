#include <stdio.h>

int main() {
    int i, n;
    printf("Enter the number: ");
    scanf("%d", &n);

    if (n < 0) {
        printf("Factorial is not defined for negative numbers.\n");
        return 1;
    }

    for (int j = 1; j <= n; j++) {
        int factorial = 1;
        for (i = 1; i <= j; i++) {
            factorial = factorial * i;
        }
        printf("\nThe factorial of %d is %d.", j, factorial);
    }
    printf("\n");
    return 0;
}