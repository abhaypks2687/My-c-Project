// 1. Write a program to check wheather given number is positive, negative or zero.//
/*#include<stdio.h>
int main()
{
    int num;
    printf("Enter Number:");
    scanf("%d",&num);
    if(num>0)
    printf("Number is Positive");
    else if(num<0)
    printf("Nunber is Negative");
    else
    printf("Zero");
    return 0;
}*/
// 2.WAP to check wheather given character is an alphabet(Uppecase),an alphabet(Lowercase),a digit or a special character//
/*#include<stdio.h>
int main()
{
    char ch;
    printf("Enter a Character:");
    scanf("%c",&ch);
    if(ch>='A'& ch<='Z')
    printf("Uppercase Alphabet:%c=%d",ch,ch);
    else if(ch>='a'& ch<='z')
    printf("Lowercase Aplphabet:%c=%d",ch,ch);
    else if(ch>='0' & ch<='9')
    printf("Digit");
    else
    printf("Other Symbol");
    return 0;
}*/
// 3.WAP which takes the length of sides of a triangle as an input. Display wheather is triangle valid or not.//
/*#include<stdio.h>
int main()
{
    int a,b,c;
    printf("Enter the length of sides:");
    scanf("%d%d%d",&a,&b,&c);
    if(a+b>c && b+c>a && a+c>b)
    printf("Triangle is valid");
    else
    printf("Triangle is not Valid");
    return 0;
}*/
// 4.WAP which takes the month number as an input and display number of day in that month//
#include <stdio.h>
int main()
{
    int month;
    printf("Enter month number:");
    scanf("%d", &month);
    if (month == 1 || month == 3 || month == 5 || month == 7 || month == 8 || month == 10 || month == 12)
        printf("Number of day in that month is 31");
    else if ("month==4 || month==6 || month==9 || month==11")
        printf("Number of day in that month is 30");
    else if ("month==2")
        printf("Number of day in that month is 28 or 29");
    else
        printf("Not a Valid Input");
    return 0;
}