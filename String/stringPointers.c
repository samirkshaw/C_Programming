#include <stdio.h>
#include <string.h>

int main() {
    char str[] = "Hello Brother";
    char *ptr = str;

    while (*ptr != '\0') {
        printf("%c", *ptr);
        ptr++; // ptr is address; char consumes 1 byte, so it moves to next address
    }
    printf("\n");
    return 0;
}