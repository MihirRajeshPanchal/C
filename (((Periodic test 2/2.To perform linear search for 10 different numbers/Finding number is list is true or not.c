//Write a program for linear search
#include<stdio.h>
#include<conio.h>
void main()
{
int e;
int a[10],i;
for(i=0;i<=9;i++)
{
printf("Enter numbers in the array : ");
scanf("%d",&a[i]);
}
printf("Enter a random number : ");
scanf("%d",&e);
for(i=0;i<=9;i++)
{
if(e==a[i])
{
printf("Entered number matches the list \n");
break;
}
}
getch();
}
