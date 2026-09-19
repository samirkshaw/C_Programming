#include <stdio.h>

int main() {
    int marks[10];
    for (int i = 0; i < 10; i++) {
        printf("Enter marks of roll no. %d: ", i + 1);
        scanf("%d", &marks[i]);
    }
    for (int i = 0; i < 10; i++) {
        if (marks[i] < 35) {
            printf("Roll no. %d has marks less than 35\n", i + 1);
        }
    }
    return 0;
}