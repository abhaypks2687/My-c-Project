//WAP to calculate avergae of three integers. Numbers are given by user.
#include<stdio.h>
int main()
{
    int x,y,z,Average;
    printf("Enter Three Numbers:");
    scanf("%d%d%d",&x,&y,&z);
    Average=(x+y+z)/3;
    printf("Average of three numbers is %d",Average);

}