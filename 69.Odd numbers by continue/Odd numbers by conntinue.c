#include<stdio.h>
#include<conio.h>
void main()
{
int i,n=2;
for(i=1;i<=20;i++)
{
if(i==n)
{
n=n+2;
continue;
}
printf("%d ",i);
}
getch();
}
