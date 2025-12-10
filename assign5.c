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
/*#include<stdio.h>
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
}*/
//4 Write a program to make the last digit of a number stored in variable as zero.Ex.2345 is 2340//

/*#include<stdio.h>
int main()
{
    int num,lastdigit;
    printf("Enter a number:");
    scanf("%d",&num);
    lastdigit=num-(num%10);
    printf("Last digit of a number stored in variable is %d",lastdigit);
    return 0;
}*/
/*5 Write a program to input a number from the user and also input a digit. Append a digit in 
the number and print the resulting number.Ex.Number=234 and digit=9 resulting number =2349.*/

#include<stdio.h>
int main()
{
    int num,digit,resulting;
    printf("Enter a number:");
    scanf("%d",&num);
    printf("Enter a digit:");
    scanf("%d",&digit);
    resulting=(num*10)+digit;
    printf("Resulting Number is:%d",resulting);
    return 0;
}