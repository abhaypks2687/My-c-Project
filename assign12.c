//1.//1.WAP a program to print MYSirg N times on the screen.//
/*#include<stdio.h>
int main()
{
    int num=1,n;
    printf("Enter Number:");
    scanf("%d",&n);
    while(num<=n)
    {
    printf("Mysirg\n");
    num++;
    }
    return 0;
}*/
//2.WAP a program to print first N natural number on the screen.//
/*#include<stdio.h>
int main()
{
    int i=1,N;
    printf("Enter Number:");
    scanf("%d",&N);
    while(i<=N)
    {
        printf("%d\n",i);
        i++;
    }
    return 0;
}*/
//3.WAP a program to print first N natural numbers in reverse order on the screen.//
/*#include<stdio.h>
int main()
{
    int num=1,N;
    printf("Enter Numbers:");
    scanf("%d",&N);
    while(num<=N)
    {
        printf("%d\n",(N+1)-num);
        num++;
    }
    return 0; 
}*/
//4.WAP a program to print the first N odd natural numbers.//
/*#include<stdio.h>
int main()
{
    int i=1,N;
    printf("Enter Numbers:");
    scanf("%d",&N);
    while(i<=N)
    {
        printf("%d\n",2*i-1);
        i++;
    }
    return 0;
}*/
//5.WAP a program to print the first N odd natural numbers in reverse order.//
/*#include<stdio.h>
int main()
{
    int num=1,N;
    printf("Enter Number:");
    scanf("%d",&N);
    while(num<=N)
    {
        printf("%d\n",2*N+1-2*num);
        num++;
    }
    return 0;
}*/
//6.WAP a program to print the first N even natural numbers in .//
/*#include<stdio.h>
int main()
{
    int i=1,N;
    printf("Enter Number:");
    scanf("%d",&N);
    while(i<=N)
    {
        printf("%d\n",2*i);
        i++;
    }
    return 0;
}*/
//7.WAP a program to print the first N even natural numbers in revese order.//
/*#include<stdio.h>
int main()
{
    int num=1,N;
    printf("Enter Number:");
    scanf("%d",&N);
    while(num<=N)
    {
        printf("%d\n",2*N+2-2*num);
        num++;
    }
    return 0;
}*/
//8.WAP a program to print square of the first N natural numbers.//
/*#include<stdio.h>
int main()
{
    int i=1,N;
    printf("Enter Number:");
    scanf("%d",&N);
    while(i<=N)
    {
        printf("Square of the %d is %d\n",i,i*i);
        i++;
    }
    return 0;
}*/
///9.WAP a program to print cubes of the first N natural numbers://
/*#include<stdio.h>
int main()
{
    int num=1,N;
    printf("Enter Number:");
    scanf("%d",&N);
    while(num<=N)
    {
        printf("Cubes of the %d is %d\n",num,num*num*num);
        num++;
    }
    return 0;
}*/
///9.WAP a program to print a table of N.//
#include<stdio.h>
int main()
{
    int i=1,N;
    printf("Enter Number:");
    scanf("%d",&N);
    while(i<=10)
    {
        printf("%d*%d=%d\n",N,i,N*i);
        i++;
    }
    return 0;
} 


