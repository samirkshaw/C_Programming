#include<stdio.h>
int main(){
    int n,m;
    printf("Enter the number of rows of Matrix 1 = ");
    scanf("%d",&n);
    printf("Enter the number of column for matrix 1 = ");
    scanf("%d",&m);
    int arr[n][m];
    printf("Input the Matrix\n");
    for(int j=0;j<n;j++){//
        for(int i=0;i<m;i++){
            printf("arr[%d][%d] = ",j,i);
            scanf("%d",&arr[j][i]); 
        }
    }
    for(int j=0;j<n;j++){
        if(j%2==0){
            for(int i=0;i<m;i++){
                printf(" arr[%d][%d]=%d",j,i,arr[j][i]);
            }
        }
        else{
            for(int i=m-1;i>=0;i--){
                printf(" arr[%d][%d]=%d",j,i,arr[j][i]);

            }
        }
        printf("\n");
    }
    return 0;
}


