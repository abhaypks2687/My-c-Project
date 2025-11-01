//WAP to find the area of the circle and perimeter. Take radius of circle from user. 
#include<stdio.h>
int main()
{
    float radius,area,Circumference;
    printf("Enter radius:");
    scanf("%f",&radius);
    area=3.14*radius*radius;
    Circumference=2*3.14*radius;
    printf("Area of Circle is %0.2f\nPerimeter of Circle is %0.2f",area,Circumference);
    return 0;
}