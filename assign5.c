//Write a program to input a three digit number and display the sum of digits.//
#include<stdio.h>
int main()
{
    int  num,sumdigits;
    printf("Enter three digit number:");
    scanf("%d",&num);
    sumdigits=num%10+(num/10)%10+num/100;
    printf("Sum of three digits is:%d",sumdigits);
    return 0;
}