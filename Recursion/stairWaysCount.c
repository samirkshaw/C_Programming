#include<stdio.h>

int ways(int n) {
    if (n <= 1) {
        return 1;
    }
    return ways(n - 1) + ways(n - 2);
}

int main() {
    int n;
    printf("Enter the number of stairs: ");
    scanf("%d", &n);
    printf("Number of ways: %d\n", ways(n));
    return 0;
}