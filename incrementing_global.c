#include<stdio.h>
int increment();


int main(){

    int value;
    value=increment();
    value=increment();
    value=increment();
    printf("value:%d\n",value);
    return 0;

}

int increment(){
    static int count;
    printf("count_increment%d\n",count);
    return count++;
}