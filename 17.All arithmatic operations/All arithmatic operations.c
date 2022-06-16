//Write a program witch accepts two numbers and perform mathematical operations using all arithmetic operators

#include<stdio.h>
#include<conio.h>

void main()
{
int N1,N2,Remainder,Quotient,Difference,Sum,Product;

printf("Enter N1 : ");
scanf("%d",&N1);

printf ("Enter N2 : ");
scanf("%d",&N2);

Quotient=N1/N2;
Remainder=N1 % N2;
Difference=N1-N2;
Sum =N1+N2;
Product=N1*N2;

printf("Quotient is = %d",Quotient);
printf("\n");
printf("Remainder is = %d",Remainder);
printf("\n");
printf("Difference of two numbers is = %d",Difference);
printf("\n");
printf("Addition of two numbers is = %d", Sum);
printf("\n");
printf("product of two numbers is = %d",Product);
getch();
}
