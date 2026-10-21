#include <stdio.h>
#include <stdlib.h>

int main(void) {
    int n;
    printf("Enter the number of integers you want: ");
    if (scanf("%d", &n) != 1 || n <= 0) {
        return 1;
    }

    int *ptr = malloc(n * sizeof(int));
    if (ptr == NULL) {
        return 1;
    }
    int *p = ptr;

    for (int i = 0; i < n; i++) {
        if (scanf("%d", ptr) != 1) {
            free(p);
            return 1;
        }
        ptr++;
    }

    for (int i = 0; i < n; i++) {
        printf("%d ", *p);
        p++;
    }
    printf("\n");

    free(ptr - n);
    return 0;
}