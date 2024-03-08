#include<stdio.h>
void check_pallindrome(int n);
void check_armstrong(int n);
void check_strong(int n);
void check_prime(int n);
void BinaryToDecimal(int n);

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

void check_pallindrome(int n){
  int og_n=n;
  int result=0,rem;
  while(n!=0){
    rem=n%10;
    result=result*10+rem;
    n/=10;
  }
  if(result==og_n)
    printf("\nPallindrome number\n");
  
  else
    printf("\nNot Pallindrome\n");
}

void check_armstrong(int n){
  int og_num=n;
  int n_count=n;
  int count=0;
  while(n_count!=0){
    count++;
    n_count/=10;
  }
  int count1=count;
  int rem,sum=0;
  int mul=1;
  while(n!=0){
    rem=n%10;
    while(count1!=0){
      mul*=rem;
      count1--;
    }
    sum+=mul;
    n/=10;
    mul=1;
    count1=count;
  }
  if(og_num==sum)
    printf("\nArmstrong number\n");
  else
    printf("\nNot Armstrong number\n");
  
}

void check_strong(int n){
  int og_num=n;
  int rem,sum=0,mul=1;
  while(n!=0){
    rem=n%10;
    while(rem!=0){
      mul*=rem;
      rem--;
    }
    sum=+mul;
    mul=1;
    n/=10;
  }
  if(og_num==sum)
    printf("\nThe number is a strong number\n");
  else
    printf("\nThe number is not a strong number\n");
}

void check_prime(int n){
  int og_num=n;
  int i;
  int count=0;
  for(i=2;i*i<=n;i++){
    if(n%i==0){
      count++;
    }
  }
  if((count==0&&og_num!=1)||og_num==2||og_num==3)
    printf("\nPrime number\n");
  else
    printf("\nNot a Prime number\n");
}

void BinaryToDecimal(int n){
  int rem,deci=0,weight=1;
  
  while(n!=0){
    rem=n%10;
    deci+=rem*weight;
    weight*=2;
    n/=10;
  }

  printf("\nThe decimal equivalent is %d\n",deci);
}













