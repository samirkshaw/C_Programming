#include<stdio.h>
int main(){
    int a;
    printf("Enter the number :");
    scanf("%d",&a);
    if(a%5==0){
        if(a%3==0){
            printf("Divisible by both 5 and 3");  
        }
        else{
            printf("Divisible by 5 but not by 3");
        }
    }
    else{
        printf("Not divisible by 5");
    }
    return 0;
}