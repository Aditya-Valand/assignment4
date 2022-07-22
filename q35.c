#include<stdio.h>
int main()
{
    int a,b;
    printf("Enter a number:");
    scanf("%d",&a);
    b=a%1000;
    if (a == b)
    {
      printf("Three digit number");
    }
    else
    {
        printf("Non three digit number");
    }
    
}