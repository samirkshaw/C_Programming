#include <stdio.h>

int main() {
    int n;
    printf("Enter the number: ");
    scanf("%d", &n);

    int a = 1, b = 1;
    for (int i = 1; i <= n; i++) {
        printf("The fibonacci number of %d is %d\n", i, a);
        int next = a + b;
        a = b;
        b = next;
    }
    return 0;
}
