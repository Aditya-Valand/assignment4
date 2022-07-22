#include<stdio.h>
int main()
{
    int a,b;
    printf("Enter two number:");
    scanf("%d %d",&a,&b);
    if(a>b)
    printf("a is grater then b");
    else if(b>a)
    printf("b is grater then a");
    else if(a==b)
    printf("One number");
    return 0;
}