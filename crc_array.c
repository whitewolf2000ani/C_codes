#include<stdio.h>
#include<string.h>
# define N strlen(poly)

char data[28];
char check_value[28];
char poly[10];
int data_length,i,j;

int main(){
  
  printf("Enter the data\n");
  scanf("%s",data);

  printf("Enter the generator polynomial\n");
  scanf("%s",poly);

  data_length=strlen(data);

  // appending n-1 '0' to data 
  
  for(i=data_length;i<data_length+N-1;i++){
    data[i]='0';
  }

  printf("\nData after appending n-1 '0': %s",data); 








}
