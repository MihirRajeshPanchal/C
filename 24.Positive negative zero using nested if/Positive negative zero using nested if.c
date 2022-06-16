//Write a program to find entered number is positive negative or 0 using nested if

#include<stdio.h>
#include<conio.h>

 void main()
{
int a;
printf("Enter a number : ");
scanf("%d",&a);

if(a!=0)
{
  if(a>0)
  {
  printf("Number is positive");
  }
else
  {
  printf("Number is negative");
  }
}
else
  {
  printf("Number entered is zero");
  }

 getch();
 }
