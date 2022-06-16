//Write a program for calculating gross salary for given cinditions
#include<stdio.h>
#include<conio.h>

void main()
{
int a,hra,da,salary;

printf("Enter your basic salary : ");
scanf("%d",&a);

if(a<=10000)
{
hra=a*20/100;
da=a*80/100;
salary=a+hra+da;
printf("The HRA added to your basic salary is %d",hra);
printf("\nThe DA added to your basic salary is %d",da);
printf("\nThe gross salary for the given basic salary is %d",salary);
}

if((a>10001) && (a<20000))
{
hra=a*25/100;
da=a*90/100;
salary=a+hra+da;
printf("The HRA added to your basic salary is %d",hra);
printf("\nThe DA added to your basic salary is %d",da);
printf("\nThe gross salary for the given basic salary is %d",salary);
}

if(a>=20001)
{
hra=a*30/100;
da=a*95/100;
salary=a+hra+da;
printf("The HRA added to your basic salary is %d",hra);
printf("\nThe DA added to your basic salary is %d",da);
printf("\nThe gross salary for the given basic salary is %d",salary);
}

getch();
}
