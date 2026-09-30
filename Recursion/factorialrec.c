#include <stdio.h>

int factorial(int n) {
    if (n == 0) return 1; // base case: 0! = 1
    return n * factorial(n - 1);
}

int main() {
    int n;
    printf("Enter the number: ");
    scanf("%d", &n);
    int fact = factorial(n);
    printf("%d\n", fact);
    return 0;
}