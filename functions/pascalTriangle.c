#include<stdio.h>
int factorial(int f) {
    int x = 1;
    for (int i = 1; i <= f; i++) {
        x = x * i;
    }
    return x;
}

int nCr(int g, int h) {
    int nr = factorial(g)/(factorial(h)*factorial(g-h));
    return nr;
}

int main() {
    int n, i, j;
    printf("Enter the number of rows: ");
    scanf("%d", &n);

    for (i = 0; i < n; i++) {
        for (j = 0; j <= i; j++) {
            int icj = nCr(i, j);
            printf("%d ", icj);
        }
        printf("\n");
    }
    return 0;
}