#include<stdio.h>
int main(){
    int i,j;
    for(i=2;i<=200;i++){
       for(j=1;j*j<=i;j++){
           if (i%j==0){
            break;
           }
       }
       if(j*j>i){
         printf("\n%d",i);

       }
      
        
    }
    return 0;
}
