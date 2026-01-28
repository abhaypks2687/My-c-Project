//Wap to calculate of size of character constant//
/*#include<stdio.h>
int main()
{
    char ch='@';     // OR METHOD int x;//
    ch=sizeof('@');  //x=sizeof('A');//
    printf("Size of character constant is:%d",ch);
    return 0;
}*/ 
//2. Wap to calculate of size of real constant//
/*#include<stdio.h>
int main()
{
int x;
x=sizeof(int);
printf("Size of int %d\n",x);
x=sizeof(float);
printf("Size of float %d\n",x);
x=sizeof(char);
printf("Size of char %d\n",x);
x=sizeof(double);
printf("Size of double %d",x);
}*/
/*3.Wap with one char type variable. Assign 'A' in the variable.Now change the value of variable
'A' to 'B' using increment operator.*/
 /*#include<stdio.h>
 int main()
 {
    char ch='A';
    ch++;
    printf("%d %c",ch,ch);
 }*/
//4.Wap to swap value of two int variable without using third variable//
/*# include<stdio.h>
int main()
{
    int a,b;
    printf("Enter a number:");
    scanf("%d",&a);
    printf("Enter a number:");
    scanf("%d",&b);
    a=a+b;
    b=a-b;
    a=a-b;
    printf("After Swaping value a=%d & b=%d:",a,b);
}*/
//5.Wap to swap value of two int variable using third variable//
/*#include<stdio.h>
int main()
{
    int a,b,c;
    printf("Enter 1st number:");
    scanf("%d",&a);
    printf("Enter 2nd number:");
    scanf("%d",&b);
    c=a;
    a=b;
    b=c;
    printf("After Swaping Value of a=%d and b=%d",a,b);
    return 0;
}*/
//6.Wap to swap value of two int variable without using 3rd variable and without using +,- operators//
/*#include<stdio.h>
int main()
{
    int a,b;
    printf("Enter 1st number:");
    scanf("%d",&a);
    printf("Enter 2nd number:");
    scanf("%d",&b);
    a=a*b;
    b=a/b;
    a=a/b;
    printf("After Swaping value of a is %d and b is %d",a,b);
    return 0;
}*/
//7.Wap to swap value of two int variable without using 3rd variable and aithmetic operators//
/*#include<stdio.h>
int main()
{
    int a,b;
    printf("Enter 1st Number:");
    scanf("%d",&a);
    printf("Enter 2nd number:");
    scanf("%d",&b);
    a=a^b;
    b=a^b;
    a=a^b;
    printf("After Swapping Value of a is %d and b is %d",a,b);
    return 0
};*/
//8. Wap to swap value of two int variables in single line airthmetic expression"//
#include<stdio.h>
int main()
{
    int a,b;
    printf("Enter 1st number:");
    scanf("%d",&a);
    printf("Enter 2nd number:");
    scanf("%d",&b);
    a=a+b-(b=a);
    printf("After Swaing Vale of a and b is %d and %d",a,b);
    return 0;  
}
    


