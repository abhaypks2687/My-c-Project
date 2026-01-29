//1.Assume a price of 1 USD is INR 84.23. WAP to to take the amount in INR and convert in USD.
#include<stdio.h>
int main()
{
    float INR,USD;
    printf("Enter amount in INR:");
    scanf("%f",&INR);
    USD=INR/84.23;
    printf("%0.2f INR==%0.2f USD",INR,USD);
    return 0;
}
/*//2.Write a program to take three digit number from the user and rotate its by digits by one position towrds right.//
#include<stdio.h>
int main()
{
    int num,num2;
    printf("Enter a number:");
    scanf("%d",&num);
    num2=(num%10)*100+num/10;
    printf("%d",num2);
    return 0;
}*/
//3.What will be the value stored in the variable x after executing follwing statement: x=10>8>4//
/*#include<stdio.h>
int main()
{
    int x;
    x=10>8>4;
    printf("After executing value will be stored in x= %d",x);
    return 0;
}*/
//4.What will be the value stored in the variable x after executing follwing statement: x=!2>-2//
/*#include<stdio.h>
int main()
{
    int x;
    x=!2>-2;
    printf("After executing value will be stored in x=%d",x);
    return 0;
}*/
//5.What will be value stored in the variable x after executing following statement:x=3<0&&5>0//
/*#include<stdio.h>
int main()
{
    int x;
    x=3<0&&5>0;
    printf("After executing value will be stored in x=%d",x);
    return 0;
}*/
