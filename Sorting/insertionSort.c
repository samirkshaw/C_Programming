#include <stdio.h>

int main() {
    int a[8] = {55, 34, 90, 24, 75, 98, 18, 78};
    int n = 8;

    for (int k = 0; k < n; k++) {
        printf("%d ", a[k]);
    }
    printf("\n");

    for (int i = 1; i < n; i++) {
        int key = a[i];
        int j = i - 1;
        while (j >= 0 && a[j] > key) {
            a[j + 1] = a[j];
            j--;
        }
        a[j + 1] = key;
    }

    for (int m = 0; m < n; m++) {
        printf("%d ", a[m]);
    }
    printf("\n");

    return 0;
}