//Write a program if the given year is a leap year or not
#include<stdio.h>
#include<conio.h>

void main()
{
int year;

printf("Enter a year : ");
scanf("%d",&year);

if(year%400==0)
{
printf("The year is a leap year");
}
else if(year%100==0)
{
printf("The year is not a leap year");
}
else if(year%4==0)
{
printf("The year is a leap year");
}
else if(year%4!=0)
{
printf("The year is not a leap year");
}
getch();
}
