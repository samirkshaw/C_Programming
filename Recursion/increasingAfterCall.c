#include<stdio.h>

void increasing(int n){
    if(n==0) return;
    increasing(n-1);//it will keep calling itself till 0 comes , when o comes function returns means ends , then it will
    //go back to 1 which will printf 1 hen reeturn then it will go to 2 and so on.(return means function ka kaam ho gaya , functio khatam)
    printf("%d ",n);
    return;
}

int main(){
    int n;
    printf("enter the number");
    scanf("%d",&n);
    increasing(n);
return 0;
}