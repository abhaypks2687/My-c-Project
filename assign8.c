// Write a progam to check whheather a given number is a three digit number or not.//
/*#include<stdio.h>
int main()
{
    int num;
    printf("Enter a number:");
    scanf("%d",&num);
    if(num>=100 && num<1000)
    printf("Three digit number:");
    else
    printf("NOt a three digit number:");
    return 0;
}*/
// 2. Write a program to print greater betwwen two numbers. Print one number if both are the same.//
/*#include<stdio.h>
int main()
{
    int a,b;
    printf("Enter two numbers:");
    scanf("%d%d",&a,&b);
    if(a>b)
        printf("%d",a);
        else
        printf("%d",b);// if b small or same then print b//
        return 0;
    }*/
// 3. Write a program to check weather roots of a given quadratic equation are real and distinct,real and equal or imaginary roots//
/*#include <stdio.h>
int main()
{
    int a, b, c, D;
    printf("Enter three numbers:");
    scanf("%d%d%d", &a, &b, &c);
    D = b * b - 4 * a * c;
    if (D > 0)
    {
        printf("Real and distinct roots");
    }
    else if (D == 0)
        printf("Real or Equal Roots");
    else
        printf("Imaginary Roots");
    return 0;
}*/
// 4 Write a program to check weather a given year is leap year or not.//
#include <stdio.h>
int main()
{
    int year;
    printf("Enter year:");
    scanf("%d", &year);
    if(year%100==0) // It means century devided by 100//
    {
        if(year%400==0)
            printf("%d is Leap year",year);
else
        printf("%d is not Leap year",year);
    }
    else 
    {
        if (year % 4 == 0)
        printf("%d is a leap year", year);
    else
        printf("%d is not a leap year", year);
    return 0;
}}
// Write a program to find the greatest among three given number. Print number once if greatest number two or three times.//
/*#include <stdio.h>
int main()
{
    int a, b, c;
    printf("Enter three numbers:");
    scanf("%d%d%d", &a, &b, &c);
    if (a > b)
    {
        if (a > c)
            printf("%d is greatest", a);
        else
            printf("%d is greatest", c);
    }
    else if (b > c)
        printf("%d is greatest", b);
    else
        printf("%d is greatest", c);
    return 0;
}*/
