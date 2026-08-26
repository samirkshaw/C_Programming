#include<stdio.h>
int main(){
    float a = 100;
    int n;
    printf("Enter the number=");
    scanf("%d",&n);
    for(int i=1;i<=n;i=i+1){
        printf("%f ",a);
        a = a/2;
    }
    return 0;
}