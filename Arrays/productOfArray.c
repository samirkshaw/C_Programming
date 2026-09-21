#include<stdio.h>

int main() {
    int arr[5];
    for(int i = 0; i < 5; i++) {
        printf("Enter element %d: ", i + 1);
        scanf("%d", &arr[i]);
    }
    
    int product = 1;
    for(int i = 0; i < 5; i++) {
        product = product * arr[i];
    }
    
    printf("Product of array elements: %d\n", product);
    return 0;
}