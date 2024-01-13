#include<stdio.h>

int main(){
    int n,m,i,j,sum=0;
    printf("Enter the length of the matrix\n");
    scanf("%d %d",&m,&n);
    int arr[m][n];
    printf("Enter the elements\n");
    for(i=0;i<m;i++){
        for(j=0;j<n;j++){
            scanf("%d[^\n]",&arr[i][j]);
        }
    }

    printf("Summation row-wise:\n");
    for(i=0;i<m;i++){
        for(j=0;j<n;j++){
            sum+=arr[i][j];
        }
        printf("Row(%d):%d\n",(i+1),sum);
        sum=0;
    }

    sum=0;
    printf("Summation column-wise:\n");
    for(i=0;i<m;i++){
        for(j=0;j<n;j++){
            sum+=arr[j][i];
        }
        printf("Column(%d):%d\n",(i+1),sum);
        sum=0;
    }
   return 0;

}