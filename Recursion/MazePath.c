#include <stdio.h>

int maze(int cr, int cc, int er, int ec) {
    if (cr == er && cc == ec) {
        return 1;
    }
    if (cr > er || cc > ec) {
        return 0;
    }
    int rightways = maze(cr, cc + 1, er, ec);
    int downways = maze(cr + 1, cc, er, ec);
    return rightways + downways;
}

int main() {
    int a, b;
    printf("enter the no of rows: ");
    scanf("%d", &a);
    printf("enter the no of columns: ");
    scanf("%d", &b);
    int ans = maze(1, 1, a, b);
    printf("%d\n", ans);
    return 0;
}