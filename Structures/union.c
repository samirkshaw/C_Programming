#include <stdio.h>
#include <string.h>

union Data {
    int i;
    float f;
    char str[20];
};

int main() {
    union Data data;

    data.i = 10;
    printf("data.i = %d\n", data.i);

    data.f = 220.5;
    printf("data.f = %.1f\n", data.f);

    strcpy(data.str, "C Programming");
    printf("data.str = %s\n", data.str);

    printf("\nAfter strcpy, integer value is corrupted (shared memory):\n");
    printf("data.i = %d (garbage)\n", data.i);
    printf("data.f = %.1f (garbage)\n", data.f);

    return 0;
}