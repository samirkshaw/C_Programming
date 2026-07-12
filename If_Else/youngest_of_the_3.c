#include<stdio.h>
int main(){
    int ram,shyam,ajay;
    printf("enter the ages of ram shyam and ajay");
    scanf("%d %d %d",&ram,&shyam,&ajay);
    if(ram>shyam){
        if(shyam>ajay)
        printf("ajay is youngest");
        else{
            printf("shyam is youngest");
        }
    if(ajay>ram){
        if(shyam>ram)
        printf("ram is youngest");
        else{
            printf("shyam is youngest");
        }
    } 
    }

    return 0;
}