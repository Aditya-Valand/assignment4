#include<stdio.h>
int main()
{
    int a;
    printf("Enter a number:");
    scanf("%d",&a);
    if(a%3==0 && a%2==0)
    printf("Divisible by 3 and 2");
    else
    printf("Not divisible by 3 and 2");
    
}