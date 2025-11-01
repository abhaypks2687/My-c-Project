//WAP to calculate area of a rectangle. Input appropriate data form the user.
#include<stdio.h>
int main()
{
    int l,b,Area;
    printf("Enter length:");
    scanf("%d",&l);
    printf("Eneter a Width:");
    scanf("%d",&b);
    Area=l*b;
    printf("Area of rectangle is %d",Area);
    return 0;
}
