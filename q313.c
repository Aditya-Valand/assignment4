#include<stdio.h>
int main()
{
    int a;
    printf("Enter a number:");
    scanf("%d",&a);
    if(a%7==0 || a%3==0)
    printf("Divisible by 3 or 7");
    else
    printf("Not divisible by 3 or 7");
    
}