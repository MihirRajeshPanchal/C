//Write a program for area of a triangle
#include<stdio.h>
#include<conio.h>
#define n 0.5
void main()
{
int Area,Base,Height;

printf("Enter Base : ");
scanf("%d",&Base);

printf("Enter Height : ");
scanf("%d",&Height);

Area=n*Base*Height;

printf("Area of the triangle is = %d",Area);
getch();
}
