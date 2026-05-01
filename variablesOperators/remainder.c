#include<stdio.h>
int main (){
    int a,b;
    printf("enter the valur of a");
    scanf("%d",&a);
    printf("enter the valur of b");
    scanf("%d",&b);
    int q=a/b;
    int r=a-b*q;
    printf("%d",r);



    return 0;
}