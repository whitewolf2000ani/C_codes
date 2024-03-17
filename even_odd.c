#include<stdio.h>
void odd();
void even();
// Printing number's from 1 to 10 where if its odd add 1 and if its even substract 1
int n=1;
int main(){
  odd();
}

void odd(){
  if(n<=10){
    printf("%d\n",n+1);
    n++;
    even();
  }
  return;
}

void even(){
  if(n<=10){
    printf("%d\n",n-1);
    n++;
    odd();
  }
  return;
}
