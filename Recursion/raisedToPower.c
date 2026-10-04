#include <stdio.h>

int power(int a, int b) {
    if (b == 0) return 1;
    return a * power(a, b - 1);
}

int main() {
    int a, b;
    printf("Enter the base: ");
    scanf("%d", &a);
    printf("Enter the power: ");
    scanf("%d", &b);
    int ans = power(a, b);
    printf("%d\n", ans);
    return 0;
}