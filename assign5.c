//Write a program to input a three digit number and display the sum of digits.//
/*#include<stdio.h>
int main()
{
    int  num,sumdigits;
    printf("Enter three digit number:");
    scanf("%d",&num);
    sumdigits=num%10+(num/10)%10+num/100;
    printf("Sum of three digits is:%d",sumdigits);
    return 0;
}*/
//2 Write aprogram to find ASCII code of character '+'.//
/* #include<stdio.h>
int main()
{
    char ch='+';
    printf("ASCII code of character %c is %d",ch,ch);
}*/
//3. Write a program to print size of an int, a float, a char and a double type variable.//
#include<stdio.h>
int main()
{
    int a;
    a=sizeof(int);
    printf("\nSize of int is   %d",a);
    a=sizeof(float);
    printf("\nSize of float is %d",a);
    a=sizeof(char);
    printf("\nSize of float is %d",a);
    a=sizeof(double);
    printf("\nSize of float is %d",a);
    return 0;
}

