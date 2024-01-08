#include<stdio.h>

int main(){
    int i;

    do{
        printf("Enter a number\n");
        scanf("%d",&i);
        i--;
        printf("%d\n",i);
    }while(i>0);
    printf("out of do-while loop!");
}