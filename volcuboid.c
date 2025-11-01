// WAP to calculate volume of cuboid
#include<stdio.h>
int main()
{
    int l,b,h,Volume;
    printf("Enter length:");
    scanf("%d",&l);
    printf("Enter breadth:");
    scanf("%d",&b);
    printf("Enter Heigth:");
    scanf("%d",&h);
    Volume=l*b*h;
    printf("Volume of Cuboid is %d",Volume);
    return 0;
}