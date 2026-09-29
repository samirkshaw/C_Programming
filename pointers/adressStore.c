#include <stdio.h>

int main() {
    int a = 5;
    int *x = &a;

    printf("Address of a: %p\n", (void*)x);
    printf("Value at address: %d\n", *x);
    printf("Value of a: %d\n", a);

    return 0;
}