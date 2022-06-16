//Write a program for taking modulus of two numbers
#include<stdio.h>
#include<conio.h>

void main()
{
int n1,n2,Remainder;
printf("Enter number 1 : ");
scanf("%d",&n1);

printf("Enter number 2 : ");
scanf("%d",&n2);

Remainder=n1%n2;

printf("The modulus of two numbers is %d",Remainder);
getch();
}
