//WAP to calculate avergae of three integers. Numbers are given by user.
#include<stdio.h>
int main()
{
    int x,y,z;
    float average;
    printf("Enter Three Numbers:");
    scanf("%d%d%d",&x,&y,&z);
    average=(x+y+z)/3.0;
    printf("Average of three numbers is %0.2f",average);

}