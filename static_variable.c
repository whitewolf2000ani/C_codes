#include<stdio.h>
static int i;
static int i=90;
static int i;
int main(){
    static int i;
    printf("%d",i);
    return 0;
}