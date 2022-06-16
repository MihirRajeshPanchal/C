//Write a program to calculate simple interest
#include<stdio.h>
#include<conio.h>

void main()
{
int principal,rate,years,interest;

printf("Enter principal amount : ");
scanf("%d",&principal);

printf("Enter the rate : %");
scanf("%d",&rate);

printf("Enter the total number of years : ");
scanf("%d",&years);

interest=principal*rate*years/100;

printf("The simple interest is = %d",interest);
getch();
}
