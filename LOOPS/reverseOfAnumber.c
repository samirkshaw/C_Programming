#include <stdio.h>

int main() {
    int n, rev = 0, ld;
    int sign = 1;

    printf("Enter the number: ");
    scanf("%d", &n);

    if (n < 0) {
        sign = -1;
        n = -n;
    }

    while (n != 0) {
        ld = n % 10;
        rev = rev * 10 + ld;
        n = n / 10;
    }

    printf("The reverse of the input number is %d.\n", rev * sign);
    return 0;
}