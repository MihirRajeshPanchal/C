#include<stdio.h>
#include<conio.h>
void main()
{
int i,a=0,b=1,x;
printf("Fibonacci Series: ");

for(i=1;i<=8;i++)
{
printf("%d,",a);
x=a+b;
a=b;
b=x;
}
getch();
}
