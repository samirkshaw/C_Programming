#include <stdio.h>

int main() {
    int arr[5][5];

    for (int j = 0; j < 5; j++) {
        for (int i = 0; i < 5; i++) {
            arr[j][i] = 10;
        }
    }

    for (int j = 0; j < 5; j++) {
        for (int i = 0; i < 5; i++) {
            printf("%d ", arr[j][i]);
        }
        printf("\n");
    }
    return 0;
}