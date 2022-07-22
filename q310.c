#include<stdio.h>
int main()
{
    float cost_price,selling_price,profit_loss;
    printf("Enter a cost price:");
    scanf("%f",&cost_price);
    printf("Enter a selling price:");
    scanf("%f",&selling_price);
    if(selling_price>cost_price)
    {
        printf("Profit\n");
        profit_loss=selling_price-cost_price;
        profit_loss=(profit_loss/cost_price)*100;
        printf("profit percntage is %f%%",profit_loss);
    }
    else
    {
        printf("Loss\n");
        profit_loss=cost_price-selling_price;
        profit_loss=(profit_loss/selling_price)*100;
        printf("Loss in percentage is %f%%",profit_loss);
    }
    return 0;
}    