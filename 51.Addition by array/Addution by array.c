//Addition of five numbers using array
#include<stdio.h>
#include<conio.h>
void main()
{
int a[5];
int sum=0,i;
printf("Enter five numbers in the array :\n");

for(i=0;i<5;i++)
{
scanf("%d",&a[i]);
sum=sum+a[i];
}
printf("The sum of five numbers is %d",sum);
getch();
}
