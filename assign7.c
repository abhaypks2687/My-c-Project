// Wap to check weather a given number is positive or non-positive with the help of if only.//
/*#include<stdio.h>
int main()
{
    int num;
    printf("Enter a number:");
    scanf("%d",&num);
    if(num>0)
    printf("positive");
    if(num<=0)
    printf("Non-positive");
}*/
//2. Wap to check weather a given number is positive or non-positive with the help of if-else//
/*#include<stdio.h>
int main()
{
    int num;
    printf("Enter a number:");
    scanf("%d",&num);
    if(num>0)
    printf("Positve");
    else
    printf("Non-positive");
}*/
//3. Write a program to check weather a given number is divisible by 5 or not//
#include<stdio.h>
int main()
{
    int x;
    printf("Enter a number:");
    scanf("%d",&x);
    if(x%5==0)
    printf("%d is divisible by 5",x);
    else
    printf("%d is not divisible by 5",x);
}