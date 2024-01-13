#include<stdio.h>

int main(){
    int m,n,m1,n1,i,j,k,sum=0;
    printf("Enter the order for first matrix\n");
    scanf("%d %d",&m,&n);
    int a[m][n];
    printf("Enter the order of the second matrix\n");
    scanf("%d %d",&m1,&n1);
    int b[m1][n1];
    int pro[m][n1];

    if(n!=m1){
        printf("matrix multiplication not possible\n");
    }
    else{

        printf("Enter the elements of matrix A\n");
        for(i=0;i<m;i++){
            for(j=0;j<n;j++){
                scanf("%d[^\n]",&a[i][j]);
            }
        }

        printf("Enter the elements of matrix B\n");
        for(i=0;i<m;i++){
            for(j=0;j<n;j++){
                scanf("%d[^\n]",&b[i][j]);
            }
        }

        for(i=0;i<m;i++){
            for(j=0;j<n1;j++){
                for(k=0;k<n;k++){
                    sum+=a[i][k]*b[k][j];
                }
                pro[i][j]=sum;
                sum=0;
            }
        }

        printf("The product matrix is:\n");
        for(i=0;i<m;i++){
            for(j=0;j<n1;j++){
                printf("%d ",pro[i][j]);
            }
            printf("\n");
        }
    }

    return 0;
}