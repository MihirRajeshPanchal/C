//Write a program for area of a rectangle
#include<stdio.h>
#include<conio.h>

void main()
{
int Area,Length,Breadth;

printf("Enter Length : ");
scanf("%d",&Length);

printf("Enter Breadth : ");
scanf("%d",&Breadth);

Area=Length*Breadth;

printf("Area of the rectangle is = %d",Area);
getch();
}
