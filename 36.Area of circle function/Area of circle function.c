#include<stdio.h>
#include<conio.h>
void circle(void);
void main()
{
circle();
getch();
}
void circle (void)
{
float r,areac;
printf("Enter a value of Radius : ");
scanf("%f",&r);

areac=3.14*r*r;
printf("Area of circle is = %f\n",areac);
}
