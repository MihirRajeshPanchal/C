#include<stdio.h>
#include<conio.h>

void main()
{
int i,d,e;
printf("Enter your starting range : ");
scanf("%d",&d);
printf("Enter your ending range : ");
scanf("%d",&e);
i=d;
while(i<=e)
{
printf("number is  %d\n",i);
i=i+2;
}
printf("Thank you");
getch();
}
