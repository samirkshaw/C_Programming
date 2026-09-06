#include <stdio.h>

int main() {
    int n;
    int sum = 0, ld;
    printf("Enter the number=");
    scanf("%d", &n);
    while (n != 0) {
        ld = n % 10;
        sum = sum + ld;
        n = n / 10;
    }
    printf("The sum of the digits of the input number is %d.\n", sum);
    return 0;
}