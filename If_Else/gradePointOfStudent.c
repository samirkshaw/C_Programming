#include<stdio.h>
int main(){
    float a;
    printf("Enter percentage:");
    scanf("%f",&a);
    if(a>=80 && a<=100){
        printf("Grade A");
    }
    else if(a>=70 && a<80){
        printf("Grade B");
    }
    else if(a>=60 && a<70){
        printf("Grade C");
    }
    else if(a>=50 && a<60){
        printf("Grade D");
    }
    else if(a>=40 && a<50){
        printf("Grade E");
    }
    else{
        printf("Grade F");
    }   
    return 0;
}