#include <stdio.h>

int powerlog(int a, int b) {
    if (b == 0) return 1;
    if (b < 0) return 0; // integer power doesn't handle negative exponents
    int x = powerlog(a, b / 2);
    if (b % 2 == 0)
        return x * x;
    else
        return x * x * a;
}

int main() {
    int a, b;
    printf("enter the base: ");
    scanf("%d", &a);
    printf("enter the power: ");
    scanf("%d", &b);
    int ans = powerlog(a, b);
    printf("%d\n", ans);
    return 0;
}