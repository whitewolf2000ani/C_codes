#include<stdio.h>
#include"functions.c"

int main(){
  int num,bin;
  printf("Enter a number\n");
  scanf("%d",&num);
  printf("Enter a binary number\n");
  scanf("%d",&bin);
  check_pallindrome(num);
  check_armstrong(num);
  check_strong(num);
  check_prime(num);
  BinaryToDecimal(bin);
}


