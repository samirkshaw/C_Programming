#include<stdio.h> int main(){
    int x;
    printf("Enter the number");
    scanf("%d", &x);
     int y;
    printf("Enter the number");
    scanf("%d",&y);
     int z;
    printf("Enter the number");
    scanf("%d",&z);
    if (x > y && z < x){
        printf("%d",x);
    }
     if (y > x && z < y){
        printf("%d",y);
    }
    else{
        printf("%d"z);
    }
    return 0;
}