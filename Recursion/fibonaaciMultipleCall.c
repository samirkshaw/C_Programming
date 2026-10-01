#include<stdio.h>

int fibo(int x){
    if(x==1 || x==2) return 1;
    return fibo(x-1) + fibo(x-2);
}

int main(){
    int n;
    printf("enter the number");
    scanf("%d",&n);
    printf("%d",fibo(n));
    return 0;
}