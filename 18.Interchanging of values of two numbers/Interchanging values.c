//Write a program for interchanging of two numbers
#include<stdio.h>
#include<conio.h>

void main()
{
int n1,n2;
int temp=0;

printf("Enter Number 1 : ");
scanf("%d",&n1);

printf("Enter Number 2 : ");
scanf("%d",&n2);

printf("Before swapping values of n1,n2 as follows : ");
printf("\n");
printf("Number 1 = %d",n1);
printf("\n");
printf("Number 2 = %d",n2);
printf("\n");

temp=n1;
n1=n2;
n2=temp;

printf("After swapping values of n1,n2 as follows  : ");
printf("\n");
printf("Number 1 = %d",n1);
printf("\n");
printf("Number 2 = %d",n2);
getch();

}




