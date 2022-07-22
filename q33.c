#include<stdio.h>
int main()
{
    int a;
    printf("Enter a number:");
    scanf("%d",&a);
    if(a%2)
    printf("Odd number");
    else
    printf("Even number");
    return 0;
}