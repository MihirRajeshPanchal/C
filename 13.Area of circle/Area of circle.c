//AREA OF CIRCLE

#include<stdio.h>
#include<conio.h>
#define Pi 3.14

void main()
{
float R,Area;

printf("Enter Radius : ");
scanf("%f",&R);

Area=Pi*R*R;

printf("Area of the circle is = %.2f",Area);
getch();

}
