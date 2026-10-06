#include <stdio.h>
#include <stdbool.h>

int main() {
    int a[8] = {55, 34, 90, 24, 75, 98, 18, 78};

    // Print original array
    for (int k = 0; k < 8; k++) {
        printf("%d ", a[k]);
    }
    printf("\n");

    // Bubble sort with early exit optimization
    for (int n = 0; n < 7; n++) {
        bool flag = true;
        for (int i = 0; i < 7 - n; i++) {
            if (a[i] > a[i + 1]) {
                int temp = a[i];
                a[i] = a[i + 1];
                a[i + 1] = temp;
                flag = false;
            }
        }
        if (flag) break;
    }

    // Print sorted array
    for (int j = 0; j < 8; j++) {
        printf("%d ", a[j]);
    }
    printf("\n");

    return 0;
}