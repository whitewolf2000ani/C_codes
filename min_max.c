#include<stdio.h>

void check(int a[],int l,int *max,int *min);
int main(){
    int arr[]={34,4,56,7,10,23,33};
    int len=sizeof(arr)/sizeof(arr[0]);
    int max,min;

    check(arr,len,&max,&min);
    printf("\nMax value:%d Min value:%d\n",max,min);
    return 0;
}

void check(int a[],int l,int *max,int *min){
    int i;
    *max=*min=a[0];

    for(i=1;i<l;i++){
        if(a[i]>*max){
            *max=a[i];
        }
        if(a[i]<*min){
            *min=a[i];
        }
    }

}