#include<stdio.h>

int main() {
    int arr[7] = {1, 2, 3, 4, 5, 6, 7};
    int n = 7;
    
    printf("All pairs in the array:\n");
    for(int i = 0; i < n; i++) {
        for(int j = i + 1; j < n; j++) {
            printf("(%d, %d) ", arr[i], arr[j]);
        }
        printf("\n");
    }
    
    return 0;
}