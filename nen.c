#include<stdio.h>
#include<stdlib.h>
void output();
int global_var=10;
int main (){
    int n;
    global_var=10;
    printf("enter a number\n");
    scanf("%d",&n);
    printf("Hello the number is:%d and global variable is:%d\n",n,global_var);
    output();
    return 0;
}
void output(){
  printf("global_variable:%d\n",global_var);
}

