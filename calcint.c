// Wap to calculate the interest earned on my savings account balance//
#include<stdio.h>
int main()
{
    double intcredit,dailyclosebal,annualintrate;
    int numberdays;
    printf("Enter Daily Balance Amount:");
    scanf("%lf",&dailyclosebal);
    printf("Enter Rate of Interest:");
    scanf("%lf",&annualintrate);
    printf("Enter Number Of Days:");
    scanf("%d",&numberdays);
    intcredit=dailyclosebal*annualintrate*numberdays/36500;
    printf("Interest Credit %0.2lf",intcredit);
    return 0;
}