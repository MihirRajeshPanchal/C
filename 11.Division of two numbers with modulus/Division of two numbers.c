//Write a program on division of two numbers
#include<stdio.h>
#include<conio.h>

void main()
{
int Dividend,Divisor,Remainder,Quotient;

printf("Enter Dividend : ");
scanf("%d",&Dividend);

printf ("Enter Divisor : ");
scanf("%d",&Divisor);

Quotient=Dividend/Divisor;
Remainder=Dividend % Divisor;

printf("Quotient is = %d",Quotient);
printf("\n");
printf("Remainder is = %d",Remainder);
getch();
}
