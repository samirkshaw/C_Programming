#include<stdio.h>
int main(){
    int x;
    printf("Enter the number");
    scanf("%d",&x);
    if(x>99 && x<1000){
        printf("three digit");
    }
    else{
        printf("not three digit number");
    }
    return 0;
}