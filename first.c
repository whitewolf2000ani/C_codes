#include<stdio.h>
#include "second.c"
int main(){
  int value;
  value=increment();
  value=increment();
  value=increment();
  printf("%d",value);
  return 0;
}
