//WAP to calculate area of a perimeter. Input appropriate data form the user.
#include<stdio.h>
int main()
{
    float length,width,perimeter;
    printf("Enter length:");
    scanf("%f",&length);
    printf("Enter width:");
    scanf("%f",&width);
    perimeter=2*(length+width);
    printf("Perimeter of rectangle is %0.2f",perimeter);
    return 0;
}