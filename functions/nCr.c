#include<stdio.h>

int factorial(int f){
    int x=1;
    for(int i =1;i<=f;i++){
        x=x*i;
    }
    return x;
}
int main(){
    int n,r;
    printf("Enter the value of n : ");
    scanf("%d",&n);
    printf("Enter the value of r : ");
    scanf("%d",&r);
    if(r>n){
        printf("value of 'r' cant be greater than 'n'. Please enter valid inputs.");
    }
    else{
        int nCr = factorial(n)/(factorial(r)*factorial(n-r));

        printf("nCr = %d\n", nCr);
    }
    return 0;
}