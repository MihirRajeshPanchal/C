//Write a program to find greater out of two numbers
#include<stdio.h>
#include<conio.h>

void main()
{
int n1,n2;

printf("Enter Number 1 : ");
scanf("%d",&n1);

printf("Enter Number 2 : ");
scanf("%d",&n2);

if(n1>n2)
{
printf("%d is greater\n",n1);
}
else
{
printf("%d is greater",n2);
}
getch();
}
