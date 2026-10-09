#include <stdio.h>
#include <string.h>

int main() {
    char arr[] = {'H', 'e', 'l', 'l', 'o', '\0', 'W', 'o', 'r', 'l', 'd'};
    printf("String with embedded null: ");
    for (int i = 0; i < 11; i++) {
        if (arr[i] == '\0') {
            printf("\\0");
        } else {
            printf("%c", arr[i]);
        }
    }
    printf("\n");
    printf("Printed with %%s (stops at null): %s\n", arr);
    printf("Length via strlen: %zu\n", strlen(arr));
    return 0;
}