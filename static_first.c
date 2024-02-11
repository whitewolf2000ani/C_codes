#include<stdio.h>
#include "static_second.c"
int main(){
  int var;
  var=increment();
  var=increment();  
  var=increment();  
  var=increment();
  printf("%d\n",var);

  return 0;

}
