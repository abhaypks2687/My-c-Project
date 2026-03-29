//1.Wap to calculate sum of first N natural numbers. Using While Loop//
/*#include<stdio.h>
int main()
{
    int i=1,N,sum=0;
    printf("Enter Number:");
    scanf("%d",&N);
        while(i<=N)
        {
            sum=sum+i;
        i++;
    }
     printf("Sum is:%d",sum);
    return 0; 
}*/
//.Wap to calculate sum of first N natural numbers. Using do While Loop//
/*#include<stdio.h>
int main()
{
    int i=1,N,sum=0;
    printf("Enter Number:");
    scanf("%d",&N);
    do
    {
        sum=sum+i;
        i++;
    } while (i<=N);
    printf("Sum is %d",sum);
}*/
//.Wap to calculate sum of first N natural numbers. Using ForLoop//
/*#include<stdio.h>
int main()
{
    int i,N,sum=0;
    printf("Enter number:");
    scanf("%d",&N);
    for(i=1;i<=N;i++)
        sum=sum+i;
printf("The sum is:%d",sum);
    return 0;
}*/
//2.Wap to calculate sum of first N even natural numbers. Using While Loop//
/*#include<stdio.h>
int main()
{
    int i=1,N,sum=0;
    printf("Enter Number:");
    scanf("%d",&N);
    while(i<=N)
    {
        sum=sum+2*i;
        i++;
    }
    printf("The sum is:%d",sum);
    return 0;
}*/
//2.Wap to calculate sum of first N even natural numbers. Using do While Loop//
/*#include<stdio.h>
int main()
{
    int i=1,N,sum=0;
    printf("Enter number:");
    scanf("%d",&N);
    do
    {
    sum=sum+2*i;
        i++;
    }while (i<=N);
    printf("The sum is:%d",sum);
    return 0;
}*/
//2.Wap to calculate sum of first N even natural numbers. Using For Loop//
/*#include<stdio.h>
int main()
{
    int i,N,sum=0;
    printf("Enter Number:");
    scanf("%d",&N);
    for(i=1;i<=N;i++)
    sum=sum+2*i;
    printf("The Sum is:%d",sum);
    return 0;
}*/
//3.Wap to calculate sum of first N odd natural numbers. Using while Loop//
/*#include<stdio.h>
int main()
{
    int i=1,N,sum=0;
    printf("Entrer number:");
    scanf("%d",&N);
    while(i<=N)
    {
        sum=sum+2*i-1;
        i++;  
    }
   printf("The sum is:%d",sum);
   return 0;
}*/
//3.Wap to calculate sum of first N odd natural numbers. Using  do while Loop//
/*#include<stdio.h>
int main()
{
    int i=1,N,sum=0;
    printf("Entrer number:");
    scanf("%d",&N);
    do
    {
        sum=sum+2*i-1;
        i++;
    } while (i<=N);
    printf("The sum is:%d",sum);
    return 0;
}*/
//3.Wap to calculate sum of first N odd natural numbers. Using for Loop//
/*#include<stdio.h>
int main()
{
    int i,N,sum=0;
    printf("Entrer number:");
    scanf("%d",&N);
    for(i=1;i<=N;i++)
    sum=sum+2*i-1;
    printf("The sum is:%d", sum);
    return 0;
}*/
//4.Wap to calculate sum of square of first N natural numbers. Using for Loop//
/*#include<stdio.h>
int main()
{
    int i,N,sum=0;
    printf("Enter Number:");
    scanf("%d",&N);
    for(i=1;i<=N;i++)
    sum=sum+i*i;
    printf("The sum of Square is:%d",sum);
    return 0;
}*/
//5.Wap to calculate sum of cube of first N natural numbers. Using for Loop//
/*#include<stdio.h>
int main()
{
    int i,N,sum=0;
    printf("Enter Number:");
    scanf("%d",&N);
    for(i=1;i<=N;i++)
    sum=sum+i*i*i;
    printf("The sum of Cubes is:%d",sum);
    return 0; 
}*/
// USING BREAK//
/* Write a progarm which asks user to create an even number, computer will give user at most 3 chances,if user failed to answer
in any of the chances,"Game Over" message should be dispalyed on the screen, otherwise "You win", message should be displayed 
and game stops immediately.*/
#include<stdio.h>
int main()
{
    int i,num;
    for(i=1;i<=3;i++)
    {
    printf("Enter Numbers:");
    scanf("%d",&num);
    if(num%2==0)
    break;
    }
    if(i==4)
    printf("Game Over");
    else
    printf("win");
    return 0;
}