#include<stdio.h>

int main(){
    int n,i;
    int sum=0,*p;
    printf("enter the number of elements\n");
    scanf("%d",&n);
    int a[n];
    printf("Enter the elements\n");
    for(p=a;p<=a+(n-1);p++){
        scanf("%d",p);
    }

    for(p=a;p<=a+(n-1);p++){
        sum+=*p;
    }

    printf("sum is %d\n",sum);

    return 0;
}
