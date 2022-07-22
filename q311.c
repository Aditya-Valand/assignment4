#include<stdio.h>
int main()
{
    int a,b,c,d,e;
    printf("Enter mark out of 100 of 5 subject:");
    scanf("%d %d %d %d %d",&a,&b,&c,&d,&e);
    if(a<33)
    printf("failed");
    else if(b<33)
    printf("failed");
    else if(c<33)
    printf("failed");
    else if(d<33)
    printf("failed");
    else if(e<33)
    printf("failed");
    else
    printf("passed");
}