#include<stdio.h>
int main()
{
    int a,b,c;
    printf("Enter three numbers:");
    scanf("%d %d %d",&a,&b,&c);
    if(a>b)
    {
        if(a>c)
        printf("a is gratest number");
        else
        printf("c is gratest number");
    }
    else if(b>c)
    printf("b is gratest number");
    else
    printf("c is gratest number");
    return 0;
}