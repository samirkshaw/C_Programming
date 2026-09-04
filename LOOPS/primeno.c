#include <stdio.h>

int main() {
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);

    if (n <= 1) {
        printf("The number is neither prime nor composite.\n");
        return 0;
    }

    int is_prime = 1;
    for (int i = 2; i * i <= n; i++) {
        if (n % i == 0) {
            is_prime = 0;
            break;
        }
    }

    if (is_prime) {
        printf("The number is prime.\n");
    } else {
        printf("The number is composite.\n");
    }

    return 0;
}