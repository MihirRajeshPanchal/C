//Write a program to find if entered decimal number is between 10 & 20
#include<stdio.h>
#include<conio.h>
void main()
{
float a;

printf("Enter a number : ");
scanf("%f",&a);

if((a<20)&&(a>10))
{
printf("The number is between 10 and 20");
}
if((a>20.00001)||(a<9.99999))
{
printf("The number is not between 10 and 20");
}
getch();















}
