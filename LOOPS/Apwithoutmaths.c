#include <stdio.h>

int main() {
    int n;
    printf("Enter a number: ");
    if (scanf("%d", &n) != 1 || n <= 0) {
        printf("Invalid input\n");
        return 1;
    }
    int a = 4;
    for (int i = 1; i <= n; i++) {
        printf("%d ", a);
        a += 3;
    }
    printf("\n");
    return 0;
}