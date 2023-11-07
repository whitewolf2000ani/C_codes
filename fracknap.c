 #include<stdio.h>
 #include<stdlib.h>
 int main(){
    int n;
    printf("enter the size");
    scanf("%d",&n);
    int A[n];
    for(int i=0;i<n;i++){
        scanf("%d",&A[i]);
    }
    for(int i=0;i<n;i++){
        printf("%d\n",A[i]);
    }
    return 0;
 }