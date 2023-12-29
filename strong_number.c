#include<stdio.h>

int main(){
    int n,q,mul=1,rem,result=0;

    printf("Enter a number to check for strong number\n");
    scanf("%d",&n);

    q=n;
    while(q!=0){
        rem=q%10;
        while(rem!=0){
            mul*=rem;
            rem--;
        }
        result+=mul;
        q/=10;
        mul=1;
    }

    if(result==n)
        printf("strong number!");
    else
        printf("not a strong number!");

    return 0;
}