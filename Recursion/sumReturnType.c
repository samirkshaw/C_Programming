#include<stdio.h>

int addition(int x){
    if(x==0) return 0;
    return x+addition(x-1);
}

int main(){
    int n;
    printf("enter the number: ");
    scanf("%d",&n);
    int sum = addition(n);
    printf("%d\n", sum);
    return 0;
}