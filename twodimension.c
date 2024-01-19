#include<stdio.h>

int main(){
    int arr[2][2]={1,2,3,4};
    int *p;
    for(p=&arr[0][0];p<=&arr[1][1];p++)
        printf("%d\n",*p);

    return 0;
}