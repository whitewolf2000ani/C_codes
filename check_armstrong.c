#include<stdio.h>

int main(){
    int num,q,count=0,rem,mul=1,result=0,cmt;
    
    printf("enter the number!\n");
    scanf("%d",&num);

    q=num;

    while(q!=0){
        q/=10;
        count++;
    }

    cmt=count;
    q=num;
    while(q!=0){
        rem=q%10;
        while(cmt!=0){
            mul*=rem;
            cmt--;
        }
        result+=mul;
        q/=10;
        mul=1;
        cmt=count;
    }

    if(result==num)
        printf("Armstrong number!");
    else
    printf("not a Armstrong number!");

    return 0;
}