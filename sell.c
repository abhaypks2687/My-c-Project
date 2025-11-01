/*WAP program to ask the use about the cost price and selling price banana per dozen. Calculate the profit and
loss earned upon 25 bannaa*/
#include<stdio.h>
int main()
{
    float cp,sp,p,l;
    printf("Enter Cost Price:");
    scanf("%f",&cp);
    printf("Enter Selling Price:");
    scanf("%f",&sp);
    p=((sp-cp)*25)/12;
    l=((cp-sp)*25)/12;
    printf(" Profit earned upon 25 banana %0.2f is\nloss earned upon 25 banana is %0.2f",p,l);
    return 0;
}
