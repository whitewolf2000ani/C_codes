#include<stdio.h>
int main(){
  int var=34;
  {
    // added a block to check the scope of variable var.
   int var=45;
   printf("%d\n",var); 
  }
  return 0;
}


