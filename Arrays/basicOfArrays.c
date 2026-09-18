#include <stdio.h>

int main() {
    int arr[5];
    for (int i = 0; i <= 4; i++) {
        printf("Enter element no.%d: ", i);
        scanf("%d", &arr[i]);
    }

    printf("\nArray elements: ");
    for (int i = 0; i <= 4; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}