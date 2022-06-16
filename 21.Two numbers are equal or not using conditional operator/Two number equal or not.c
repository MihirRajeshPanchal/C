//Write a program to find the number is equal to another number or not

#include<stdio.h>
#include<conio.h>

void main()
{
int n1,n2;

printf("Enter Number : ");
scanf("%d",&n1);

printf("Enter Number : ");
scanf("%d",&n2);

(n1==n2)?
 printf("%d is equal to %d",n1,n2):
 printf("%d is not equal to %d",n1,n2);

getch();
}
