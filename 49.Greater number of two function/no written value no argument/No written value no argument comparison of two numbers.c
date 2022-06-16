#include<stdio.h>
#include<conio.h>
void greater(void);

void main()
{
greater();
getch();
}
void greater(void)
{
int a,b;
printf("Enter a number : ");
scanf("%d",&a);
printf("Enter a number : ");
scanf("%d",&b);
if(a>b)
{
printf("Greater number is %d",a);
}
else
{
printf("Greater number is %d",b);
}
}
