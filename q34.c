#include<stdio.h>
int main()
{
    int a;
    printf("Enter a number:");
    scanf("%d",&a);
    if(a/2*2==a)
    printf("Even number");
    else
    printf("Odd number");
    return 0;
}