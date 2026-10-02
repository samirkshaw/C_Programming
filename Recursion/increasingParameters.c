#include<stdio.h>

void increasing(int x,int n ){//take care of the order of x and n
    if(x>n) return;
    printf("%d ", x);
    increasing(x+1,n);//parametrised way
    return;
}

int main(){
    int n;
    printf("enter the number: ");
    scanf("%d",&n);
increasing(1,n);
    printf("\n");
    return 0;
}