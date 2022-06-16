//Write a program for menu driven switch case area of circle rectangle and triangle
#include<stdio.h>
#include<conio.h>
#define pi 3.14

void main()
{
int l,b,arear,choice;
float r,areac,base,height,areat;

printf("*******MENU*******");
printf("\n\n(1). Area of circle");
printf("\n(2). Area of rectangle");
printf("\n(3). Area of triangle");

printf("\n\nEnter your choice from menu : ");
scanf("%d",&choice);

switch(choice)
{
case 1:

       printf("\nEnter radius of the circle : ");
       scanf("%f",&r);

       areac=pi*r*r;

       printf("\nArea of circle is = %.3f",areac);

       break;
case 2:

       printf("\nEnter length of the rectangle : ");
       scanf("%d",&l);

       printf("\nEnter breadth of the rectangle : ");
       scanf("%d",&b);

       arear=l*b;

       printf("\nArea of rectangle is = %d",arear);

       break;
case 3:

       printf("\nEnter base of the triangle : ");
       scanf("%f",&base);

       printf("\nEnter height of the triangle : ");
       scanf("%f",&height);

       areat=0.5*base*height;

       printf("\nArea of triangle is = %0.1f",areat);

       break;

default :
        printf("\nInvalid input");
        break;

}

printf("\n\nThank You");

getch();
}
