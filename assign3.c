// 1. WAP to input a character from the user and print its ASCII code//
/*#include<stdio.h>
int main()
{
    char m;
    printf("Enter a character:");
    scanf("%c",&m);
    printf("ASCII code of input character %c is %d",m,m);
    return 0;
}*/
//2. Wap a program to input ASCII code from the user and print its corresponding character//
/*#include<stdio.h>
int main()
{
    char ch;
    printf("Enter an ASCII code:");
    scanf("%c",&ch);
    printf("ASCII character %c is %d",ch,ch);
    return 0;
}*/
//3.Wap to input three charcter from the user and display character with their corresponding ASCII codes//
/*#include<stdio.h>
int main()
{
    char m,ch,a;
    printf("Enter three characters:");
    scanf("%c%c%c",&m,&ch,&a);
    printf("ASCII code is %c %d\nASCII code is %c %d\nASCII code is %c %d",m,m,ch,ch,a,a);
    return 0;
}*/
//4. Wap to print last digit of a given number.//
/*#include<stdio.h>
int main()
{
 int x,digit;
 printf("Enter a number:");
 scanf("%d",&x);
 digit=x%10;
 printf("Last Digit Number is:%d",digit);
 return 0;
}*/
//5. Wap to print a given number without last digit//
#include<stdio.h>
int main()
{
    int num,digit;
    printf("Enter a number:");
    scanf("%d",&num);
    digit=num/10;
    printf("Number Without Last Digit is %d",digit);
    return 0;
}