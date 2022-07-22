#include<stdio.h>
int main()
{
    int a,b,c;
    printf("Enter three numbers:");
    scanf("%d %d %d",&a,&b,&c);
    if(a>b)
    {
        if(a>c)
        {
          if(b+c>a)
           printf("valid triangle");
          else
           printf("not valid triangle");
        }
        else
        { 
           if(a+b>c)
           printf("valid triangle");
           else
           printf("not valid triangle");
        }
   }
    else 
      if(b>c)
      {
         if(a+c>b)
         printf("valid triangle");
         else
         printf("not valid triangle");
      }
    else
           if(a+b>c)
           printf("valid triangle");
           else
           printf("not valid triangle");
    
    return 0;
}