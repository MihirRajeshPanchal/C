//Write a program for linear search
#include<stdio.h>
#include<conio.h>
void main()
{
int i,n,e;
int a[10];
printf("Enter the number of numbers you want to get the data of : ");
scanf("%d",&n);
for(i=0;i<n;i++)
{
printf("Enter numbers in the array : ");
scanf("%d",&a[i]);
}
printf("Enter a random number :");
scanf("%d",&e);
for(i=0;i<n;i++)
{
if(a[i]==e)
{
printf("Entered number matches the list \n");
break;
}
else
{
printf("Entered number doesn't matches the list \n");
break;
}
}
getch();
}
