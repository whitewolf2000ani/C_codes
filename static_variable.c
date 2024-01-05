#include<stdio.h>
int increment();
int main(){
    int value;
    value=increment();
    value=increment();
    value=increment();
    printf("value:%d",value);
}

int increment(){
    static int count;
    count+=1;
    return count;
}