#include<stdio.h>

int main(){
    int i,a=0,b=1,result,n;
    printf("how many numbers to print.\n");
    scanf("%d",&n);

    for(i=1;i<=n;i++){
        printf("%d\n",a);
        result=a+b;
        a=b;
        b=result;
    }
    return 0;
}