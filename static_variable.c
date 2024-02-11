#include<stdio.h>
static int i;
static int i=27;
int main(){
  // changing value locally is allowed and not globally
    i=100;
    printf("%d",i);
    return 0;
}
