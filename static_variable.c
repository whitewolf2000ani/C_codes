#include<stdio.h>

static int i;
static int i=25;

int main(){
    static int i;
    printf("%d\n",i);
    return 0;
}
