#include<stdio.h>
#include "second.c"
extern int count;
int main(){
  int value;
  value=increment();
  printf("%d\n",value);
// The is no security of variables, can be changed from another file.
  count=8;
  increment();
  return 0;
}
