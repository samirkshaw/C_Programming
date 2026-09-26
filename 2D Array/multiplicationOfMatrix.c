#include<stdio.h>
int main(){
    int n,m,p;
    printf("Enter the number of rows of Matrix 1 = ");
    scanf("%d",&n);
    printf("Enter the number of column for matrix 1(same as row of matrix 2) = ");
    scanf("%d",&m);
    printf("Enter the number of column for Matrix 2 = ");
    scanf("%d",&p);
    int arr[n][m];
    int brr[m][p];
    int res[n][p];
    printf("Matrix 1");
    for(int j=0;j<n;j++){//Matrix 1
        for(int i=0;i<m;i++){
            printf("arr[%d][%d] = ",j,i);
            scanf("%d",&arr[j][i]);
        }
        printf("\n");
    }
        printf("Matrix 2");
    for(int j=0;j<m;j++){//Matrix 2
        for(int i=0;i<p;i++){
            printf("brr[%d][%d] = ",j,i);
            scanf("%d",&brr[j][i]);
        }
        printf("\n");
    }
    for(int j=0;j<n;j++){//resultant matrix
        int sum =0;
        for(int i=0;i<p;i++){
            res[j][i]=0;
            for(int k=0;k<m;k++){
            
        res[j][i] += arr[j][k]*brr[k][i];
        }
    }
}
        for(int j=0;j<n;j++){
        for(int i=0;i<p;i++){
            printf("%d ",res[j][i]);
        }
        printf("\n");
    }


    return 0;
}