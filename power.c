#include<stdio.h>

int main(){
    int base,exponent,power1=1,exp;
    double power2=1.0;
    printf("enter the base\n");
    scanf("%d",&base);
    printf("enter the exponent\n");
    scanf("%d",&exponent);

    exp=exponent;
    if(exp>0){
        while(exponent!=0){
            power1*=base;
            exponent--;
        }
        printf("The value of %d to the power of %d is:%d\n",base,exp,power1);
    }
    else{
        while(exponent!=0){
            power2*=(1.0/base);
            exponent++;
        }
        printf("The value of %d to the power of %d is:%f\n",base,exp,power2);
    }

    
    return 0;
}