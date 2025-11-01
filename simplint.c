// WAP to calculate simple interst
#include<stdio.h>
int main()
{
    int principle;
    float rate;
    int time;
    float simpleint;
    simpleint=principle*rate*time;
    printf("Enter Principle amount:");
    scanf("%d",&principle);
    printf("Enter Rate:");
    scanf("%f",&rate);
    printf("Enter Time:");
    scanf("%d",&time);
    simpleint=(principle*rate*time)/100;
    printf("Simpele Interest is %0.0f",simpleint);
    return 0;
}