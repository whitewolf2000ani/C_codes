#include<stdio.h>
int check(int);
int main(){
    int num;
    printf("enter the number\n");
    scanf("%d",&num);
    int val=check(num);
    if(val==1){
        printf("repeated numbers");
    }
    else{
        printf("not repeated");
    }
    return 0;
}

int check(int n){
    int arr[10]={0};
    int rem;
    while(n>0){
        rem=n%10;
        if(arr[rem]==1)
            return 1;
        arr[rem]=1;
        n/=10;
    }
    return 0;
}