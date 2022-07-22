#include<stdio.h>
int main()
{
    int a,b,c,delta;
    printf("Enter constant of quadratic equation:");
    scanf("%d %d %d",&a,&b,&c);
    delta=(b*b)-(4*a*c);
    if(delta>0)
    printf("Real roots");
    else if(delta<0)
    printf("Imaginary roots");
    else if(delta==0)
    printf("equal roots");
    return 0;
}