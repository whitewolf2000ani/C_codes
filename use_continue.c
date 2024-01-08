#include<stdio.h>
//printing odd numbers
int main(){
    int n=2,i,digits;

    printf("Enter until which odd number is to be found!");
    scanf("%d",&digits);

    for(i=1;i<digits;i++){
        if(i==n){
            n+=2;
            continue;
        }    
        printf("number:%d\n",i);
    }
    return 0;
}