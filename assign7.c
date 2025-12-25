// Wap to check weather a given number is positive or non-negative.//
#include<stdio.h>
int main()
{
    int num;
    printf("Enter a number:");
    scanf("%d",&num);
    if(num>0)
    printf("positive");
    if(num<=0)
    printf("Non-positive");
}