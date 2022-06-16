#include<stdio.h>
#include<conio.h>

int compare(void);
void main()
{
int d;
d=compare();
printf("%d is greater",d);
getch();
}
int compare()
{
int a,b;
printf("Enter a number : ");
scanf("%d",&a);
printf("Enter a number : ");
scanf("%d",&b);
if(a>b)
{
return a;
}
else
{
return b;
}
}
