#include<stdio.h>
#include<conio.h>
void main()
{
int sum=0,i,n;
int a[100];

printf("Enter the number of numbers you want to get sum of : ");
scanf("%d",&n);
printf("Enter n numbers in the array :\n");

for(i=0;i<n;i++)
{
scanf("%d",&a[i]);
sum=sum+a[i];
}
printf("The sum of n numbers is %d",sum);
getch();
}
