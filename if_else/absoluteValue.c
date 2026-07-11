#include<stdio.h>
int main(){
    int x,y;
    printf("Enter the number :");
    scanf("%d",&x);
    if(x<0){
      y=x*(-1);
    }
    else{
      y=x;
    }
    printf("The absolute value of %d is %d",x,y);
    return 0;
}