#include<stdio.h>
int main(){
    int x;
    printf("Enter the number");
    scanf("%d",&x);
    if(x%3 || x%5){
        printf("the number is divisible by 3 or 5");
    }
    else{
        printf("not divisible by 3 or 5");
    }
    return 0;
}