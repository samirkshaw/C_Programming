#include<stdio.h>
int main(){
    int x;
    printf("Enter the number");
    scanf("%d",&x);
    if(x%2==0){
        printf("Even");
    }
    if(x%2!=0){
        printf("Odd");
    }
    return 0;
}