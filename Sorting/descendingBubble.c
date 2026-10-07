#include<stdio.h>
#include<stdbool.h>
int main(){
    int a[8]={55,34,90,24,75,98,18,78};
    //bubble sort
    int k=0;
        while (k<8){
            printf("%d ",a[k]);
        k++;
}
printf("\n");
    int n =0;
    while(n<7){
        bool flag =true;//array is not sorted yet
    int i=0;
    while(i<7-n){ //so that we do not needto check the values which are already sorted and hence save time.
    if( a[i]<a[i+1]){//at first rounf the largest no. will go at last place , so we do not need to see the last no. in next rounf the second largest eill go to second last place and so on.
        int temp =a[i];
        a[i]=a[i+1];
        a[i+1]=temp;
        i++;
        flag = false;
    }
    else if(a[i]>a[i+1])i++;
    else if(a[i]==a[i+1])i++;
}
if(flag==true)break;//to stop the code as soon as the array is sorted,if in any pass nothing is getting swaped then flg is true
n++;
} //max no of operations if the array is in descending order.
int j=0;
while (j<8){
    printf("%d ",a[j]);
    j++;
}


    return 0;
} 