#include <stdio.h>

int main() {
    char arr[] = "Hello";
    int i = 0;
    while (arr[i] != '\0') {
        printf("%c ", arr[i]);
        i++;
    }
    printf("\n");
    return 0;
}