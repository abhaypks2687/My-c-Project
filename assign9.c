// Write a program to which takes the cost price and selling price of a product from the user.Now calculate & print profit loss percentage//
/*#include<stdio.h>
int main()
{
    float sp,cp,profit,percent;
    printf("Enter Cost Price of the Product:");
    scanf("%f",&cp);
     printf("Enter Selling Price of the Product:");
    scanf("%f",&sp);
    profit=sp-cp;
    if(profit>0)
    {
        percent=profit/cp*100;
        printf("Profit percentage is %0.2f",percent);
    }
    else{
        percent=-profit/cp*100;
        printf("Loss percentage is %0.2f",percent);
        return 0;
    }
    }*/
// 2. Write a program to marks of 5 subjects from the user. Assume marks are given out of 100 and passing marks is 33. Now diplay wheather the candidate passed the examination or failed.//
/*#include<stdio.h>
int main()
{
 int Hindi,Eng,Math,Science,History;
 printf("Enter Marks of 5 Subjects:");
 scanf("%d%d%d%d%d",&Hindi,&Eng,&Math,&Science,&History);
 if(Hindi>=33 && Eng>=33 && Math>=33 && Science>=33 && History>=33)
 printf("Pass");
 else
 printf("Fail");
 return 0;
}*/
// 3.Write a progarm to chck wheather a given alphabet is in Uppercase or Lowercase//
/*#include<stdio.h>
int main()
{
  char ch;
  printf("Enter Alphabet:");
  scanf("%c",&ch);
  if(ch>='A'&& ch<='Z')
  printf("Uppercase");
  else if(ch>='a' && ch<='z')
  printf("Lowercase");
  else
  printf("Other Symbol");
  return 0;
}*/
// 4.Write a progarm to chck wheather a given number is in divisible by 3 and divisible by 2//
/*#include<stdio.h>
int main()
{
  int num;
  printf("Enter Number:");
  scanf("%d",&num);
  if(num%3==0 && num%2==0)
  printf("Number is divisible by 3 and 2");
  else
   printf("Number is  not divisible by 3 and 2");
   return 0;
}*/
// 5.Write a progarm to chck wheather a given number is in divisible by 7 or divisible by 3//
#include <stdio.h>
int main()
{
    int num;
    printf("Enter Number:");
    scanf("%d", &num);
    if (num % 7 == 0 || num % 3 == 0)
        printf("Number is divisible by 7 or 3");
    else
        printf("Number is not divisible by 7 or 3");
    return 0;
}
