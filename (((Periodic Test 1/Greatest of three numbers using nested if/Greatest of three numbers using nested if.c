//Write a program to find greatest out of three numbers
#include<stdio.h>
#include<conio.h>

void main()
{
int a,b,c;

printf("Enter number 1 : ");
scanf("%d",&a);

printf("Enter number 2 : ");
scanf("%d",&b);

printf("Enter number 3 : ");
scanf("%d",&c);

if(a>b)
{

if(a>c)
printf("The greatest number is = %d",a);

else
printf("The greatest number is = %d",c);

}
else
{

if(b>c)
printf("The greatest number is = %d",b);

else
printf("The greatest number is = %d",c);

}
getch();
}
