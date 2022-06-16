// Write a program to print the given two numbers are equal or not

#include<stdio.h>
#include<conio.h>

void main()
{
int n1,n2;

printf("Enter Number 1 : ");
scanf("%d",&n1);

printf("Enter Number 2 : ");
scanf("%d",&n2);

if(n1==n2)
 printf("%d is equal to %d  \n",n1,n2);
else
 printf("%d is not equal to %d ",n1,n2);
getch();
}
