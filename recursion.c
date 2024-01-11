#include<stdio.h>
int fact(int,int);
int main(){
    int n,val;
    printf("Enter the number\n");
    scanf("%d",&n);
    val=fact(n,1);
    printf("%d",val);
}

int fact(int n,int a){
    if(n==1){
        return a;
    }
    else{
        fact(n-1,a*n);
    }
}