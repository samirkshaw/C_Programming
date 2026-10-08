#include <stdio.h>

int main() {
    int a[8] = {1, 2, 3, 4, 5, 8, 9, 10};
    int target = 8;
    int i = 0;
    int j = 7;
    int found = 0;

    while (i < j) {
        if (a[i] + a[j] == target) {
            printf("found || %d + %d = %d\n", a[i], a[j], target);
            found = 1;
            break;
        } else if (a[i] + a[j] > target) {
            j--;
        } else {
            i++;
        }
    }

    if (!found) {
        printf("No pair found\n");
    }

    return 0;
}