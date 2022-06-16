//Write a program for area of a triangle using heron's formula
#include<stdio.h>
#include<math.h>

void main()
{
float a,b,c,s,Area;


printf("Input side 1 of the triangle : ");
scanf("%f",&a);

printf("Input side 2 of the triangle : ");
scanf("%f",&b);

printf("Input side 3 of the triangle : ");
scanf("%f",&c);

s=(a+b+c)/2;
Area=sqrt(s*(s-a)*(s-b)*(s-c));

printf("The area of the triangle is = %.3f ",Area );
getch();
}
