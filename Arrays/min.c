#include <stdio.h>
#include <limits.h>

int main() {
    int n;
    printf("Enter number of elements: ");
    scanf("%d", &n);

    int arr[n];
    for (int i = 0; i < n; i++) {
        printf("Enter element %d: ", i + 1);
        scanf("%d", &arr[i]);
    }

    int minimum = INT_MAX;
    for (int i = 0; i < n; i++) {
        if (arr[i] < minimum) {
            minimum = arr[i];
        }
    }
    printf("Minimum element: %d\n", minimum);
    return 0;
}
