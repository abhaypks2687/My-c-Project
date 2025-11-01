//WAP to calculate area of a rectangle. Input appropriate data form the user.
#include<stdio.h>
int main()
{
   float l,b,Area;
    printf("Enter length:");
    scanf("%f",&l);
    printf("Eneter a Width:");
    scanf("%f",&b);
    Area=l*b;
    printf("Area of rectangle is %0.2f",Area);
    return 0;
}
