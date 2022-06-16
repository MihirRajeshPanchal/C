//Write a program to find prime numbers from 1 - 100
#include<stdio.h>
#include<conio.h>

void main()
{
int a,i;
printf("Enter the value of n to find prime number between 1-n : ");
scanf("%d",&a);
for(i=1;i<=a;i++)
{
if((i==2)||(i==3)||(i==5))
{
printf("%d is a prime number\n",i);
}
if((i%2!=0)&&(i%3!=0)&&(i%5!=0)&&(i!=1)&&(i!=91)&&(i!=49))
{
printf("%d is a prime number\n",i);
}
}
getch();
}

