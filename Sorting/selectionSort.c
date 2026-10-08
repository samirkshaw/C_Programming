#include <stdio.h>
#include <limits.h>

int main() {
    int a[8] = {55, 34, 90, 24, 75, 98, 18, 78};
    int n = 8;

    for (int k = 0; k < 8; k++) {
        printf("%d ", a[k]);
    }
    printf("\n");

    for (int i = 0; i < n - 1; i++) {
        int min = INT_MAX;
        int minIndex = -1;
        for (int j = i; j < n; j++) {
            if (min > a[j]) {
                min = a[j];
                minIndex = j;
            }
        }
        int temp = a[i];
        a[i] = a[minIndex];
        a[minIndex] = temp;
    }

    for (int m = 0; m < 8; m++) {
        printf("%d ", a[m]);
    }
    printf("\n");

    return 0;
}