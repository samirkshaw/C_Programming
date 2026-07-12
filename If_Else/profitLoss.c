#include<stdio.h>
int main(){
    int CP;
    printf("Enter the cost price");
    scanf("%d",&CP);
     int SP;
    printf("Enter the selling price");
    scanf("%d",&SP);
    if(SP>CP){
        printf("Profit of %d",SP-CP);
    }
    if(SP==CP){
        printf("No profit, no loss");
    }
    if(SP<CP){
        printf("Loss of %d",CP-SP);
    }
    return 0;
}