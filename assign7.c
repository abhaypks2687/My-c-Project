// Wap to check weather a given number is positive or non-positive with the help of if only.//
/*#include<stdio.h>
int main()
{
    int num;
    printf("Enter a number:");
    scanf("%d",&num);
    if(num>0)
    printf("positive");
    if(num<=0)
    printf("Non-positive");
}*/
//2. Wap to check weather a given number is positive or non-positive with the help of if-else//
/*#include<stdio.h>
int main()
{
    int num;
    printf("Enter a number:");
    scanf("%d",&num);
    if(num>0)
    printf("Positve");
    else
    printf("Non-positive");
}*/
//3. Write a program to check weather a given number is divisible by 5 or not//
/*#include<stdio.h>
int main()
{
    int x;
    printf("Enter a number:");
    scanf("%d",&x);
    if(x%5==0)//OTHER METHODif(x%10==5||x%10==0)//
    printf("%d is divisible by 5",x);
    else
    printf("%d is not divisible by 5",x);
}*/
//4. Write a program to check weather a given number is an even number or an odd number //
/*#include<stdio.h>
int main()
{
    int num;
    printf("Enter a number:");
    scanf("%d",&num);
    if(num%2==0)
    printf("%d is Even no.",num);
    else
    printf("%d is odd number",num);
    return 0;
}*/
//5 Write a program to check weather a given number is an even or an odd number without using % operator//
/*#include<stdio.h>
int main()
{
    int num;
    printf("Enter a number:");
    scanf("%d",&num);
    if(num/2*2==num)
    printf("%d is an Even Number",num);
    else
    printf("%d is an odd number",num);
    return 0;
}*/
//6. Write a program to check weather a given number is an even or an odd number using bitwise % operator//
#include<stdio.h>
int main()
{
    int num;
    printf("Enter a number:");
    scanf("%d",&num);
    if(num & 1)// 0-even and 1-odd//
    printf("%d is an odd number",num);
    else 
    printf("%d is an even number",num);
    return 0;
}