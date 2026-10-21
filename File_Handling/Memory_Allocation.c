#include <stdio.h>
#include <stdlib.h>

int main(void) {
    size_t a = sizeof(long long);
    printf("%zu\n", a);

    int *ptr = malloc(10 * sizeof(int));
    if (ptr == NULL) {
        return 1;
    }
    printf("%d\n", *ptr);
    ptr++;
    printf("%d\n", *ptr);
    ptr--;

    int *ctr = calloc(10, sizeof(int));
    if (ctr == NULL) {
        free(ptr);
        return 1;
    }
    printf("%d\n", *ctr);

    free(ptr);
    free(ctr);
    return 0;
}