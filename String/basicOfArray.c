#include <stdio.h>

int main() {
    char arr[5] = {'a', 'b', 'c', 'd', 'e'};
    printf("Address of arr[0]: %p\n", (void*)&arr[0]);
    printf("Address of arr[1]: %p\n", (void*)&arr[1]);
    printf("Address of arr[2]: %p\n", (void*)&arr[2]);
    printf("Address of arr[3]: %p\n", (void*)&arr[3]);
    printf("Address of arr[4]: %p\n", (void*)&arr[4]);
    printf("Size of char: %zu byte\n", sizeof(char));
    return 0;
}