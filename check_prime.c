#include<stdio.h>

int main(){
    int n,i,count=0;

    printf("enter a positive number!\n");
    scanf("%d",&n);

    for(i=2;i*i<=n;i++){
        if(n%i==0){
            count++;
            break;
        }
    }

    if(count==0&&n!=1)
        printf("prime number %d\n",n);
    else
        printf("not a prime number\n");

    return 0;


}