#include<stdio.h>
int main(){
    int n;
    int count = 0;
    printf("Enter the number=");
    scanf("%d",&n);
    int temp = n;
    if (temp == 0) {
        count = 1;
    } else {
        for(; temp != 0; temp /= 10){
            count++;
        }
    }
    printf("There are %d number of digits in the input number.",count);
    return 0;
}