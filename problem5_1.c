#include<stdio.h>
int main()
{
    float item1=15.95, item2=24.95, item3=6.95, item4=12.95, item5=3.95;
    float subtotal, sales_tax, total;

    //For subtotal
    subtotal=item1 +item2 + item3+ item4+ item5;

    //For sales tax
    sales_tax= (subtotal * 7)/100;

    //total
    total=subtotal+ sales_tax;

    //Display results
    printf("Price of item 1 is %f\n",item1);
    printf("Price of item 2 is %f\n",item2);
    printf("Price of item 3 is %f\n",item3);
    printf("Price of item 4 is %f\n",item4);
    printf("Price of item 5 is %f\n",item5);
    printf("The sub total is %f\n",subtotal);
    printf("The sales tax is %f\n",sales_tax);
    printf("The total is %f",total);
  return 0;
}