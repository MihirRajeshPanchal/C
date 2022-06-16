//Write a program to find roots of quadratic equation using if else
#include<stdio.h>
#include<conio.h>
#include<math.h>

void main()
{
int a,b,c,d,r1,r2;

printf("Enter coefficient of x square : ");
scanf("%d",&a);

printf("Enter coefficient of x : ");
scanf("%d",&b);

printf("Enter constant : ");
scanf("%d",&c);

d=sqrt(b*b-4*a*c);
r1=(-b+d)/(2*a);
r2=(-b-d)/(2*a);

if(d>=0)
{
printf("The real roots of quadratic equation are %d and %d",r1,r2);
}
else
{
printf("The imaginary roots of quadratic equation are %d and %d",r1,r2);
}

printf("\nThank You");
getch();
}
