//No written with argument
#include<stdio.h>
#include<conio.h>
void factorial(int,int,int);
void main()
{
int i=1,f=1,n;
printf("Enter an integer number : ");
scanf("%d",&n);
factorial(i,f,n);
getch();
}
void factorial(int i,int f,int n)
{
while(i<=n)
{
f=f*i;
i++;
}
printf("Factorial = %d",f);
}
