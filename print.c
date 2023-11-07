#include<stdio.h>
#include<stdlib.h>
int main()
{   double num;
    char lit[20];
    printf("Enter the num and letter:");
    scanf("%lf",&num);
    scanf("%s",lit);
    printf("Hello\nWorld\n");
    printf("Hello\"World\n");
    printf("My favourite letter %s and number is %f",lit,num);
    return 0;
}