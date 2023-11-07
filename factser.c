#include<stdio.h>
int fact(int k);
int main(){
    int sum=0;
    int n;
    printf("enter the number");
    scanf("\n%d",&n);
    for(int i=1;i<=n;i++){
        if(i/2==0)
        {
            sum=sum+i;
        }
        else{
            sum=sum+fact(i);
        }
    }
    printf("sum of the series %d:",sum);
    return 0;
}
int fact(int k){
    int pro=1;
    for(int j=k;j>0;j--){
        pro=pro*j;
    }
    return pro;
}