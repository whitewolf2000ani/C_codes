#include<stdio.h>

int main(){
  int num;
  printf("Enter the number\n");
  scanf("%d",&num);
  int og_num=num;
  int rem,pal_num=0;
  while(num!=0){
    rem=num%10;
    pal_num=pal_num*10+rem;
    num/=10;
  }
if(pal_num==og_num){
  printf("Pallindrome number");
  }
else{
  printf("not Pallindrome");
  }

}
