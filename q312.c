#include<stdio.h>
int main()
{
    char a;
    printf("Enter a alphabat:");
    scanf("%c",&a);
    if(a>=65&&a<=90)
    printf("Upper case");
    else if(a>=97&&a<=123)
    printf("Lower case");
    else 
    printf("Not a alphabat");
    
}