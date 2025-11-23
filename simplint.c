// WAP to calculate simple interst
#include<stdio.h>
int main()
{
    float principle;
    float rate;
    float time;
    float simpleint;
    simpleint=principle*rate*time;
    printf("Enter Principle amount:");
    scanf("%f",&principle);
    printf("Enter Rate:");
    scanf("%f",&rate);
    printf("Enter Time:");
    scanf("%f",&time);
    simpleint=(principle*rate*time)/100;
    printf("Simpele Interest is %0.2f",simpleint);
    return 0;
}