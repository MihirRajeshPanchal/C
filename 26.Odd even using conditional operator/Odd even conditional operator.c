//Write a program to find the number is odd or even

#include<stdio.h>
#include<conio.h>

void main()
{
int n1;

printf("Enter Number : ");
scanf("%d",&n1);

(n1%2==0)?
 printf("%d is even \n",n1):
 printf("%d is odd ",n1);

getch();
}
