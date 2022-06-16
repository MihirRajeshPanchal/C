//write a program for printing day of the week
#include<stdio.h>
#include<conio.h>

void main()
{
int a;

printf("Enter a number from 1 to 7 for identifying the day of the week : ");
scanf("%d",&a);

if(a==1)
{
printf("The day is Monday");
}
else if(a==2)
{
printf("The day is Tuesday");
}
else if(a==3)
{
printf("The day is Wednesday");
}
else if(a==4)
{
printf("The day is Thursday");
}
else if(a==5)
{
printf("The day is Friday");
}
else if(a==6)
{
printf("The day is Saturday");
}
else if(a==7)
{
printf("The day is Sunday");
}
getch();
}
