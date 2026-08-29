#include <stdio.h>

int main() {
    int i, n;
    printf("Enter the number: ");
    scanf("%d", &n);

    if (n < 0) {
        printf("Factorial is not defined for negative numbers.\n");
        return 1;
    }

    int factorial = 1;
    for (i = 1; i <= n; i++) {
        factorial = factorial * i;
    }
    printf("The factorial of the input number is %d.\n", factorial);
    return 0;
}