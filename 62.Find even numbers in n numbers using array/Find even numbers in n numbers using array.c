#include<stdio.h>
#include<conio.h>
void main()
{
int i,count=0,n;
int a[100];
printf("Enter the number of numbers you want to get the data of : ");
scanf("%d",&n);
for(i=0;i<n;i++)
{
printf("Enter numbers in the array : ");
scanf("%d",&a[i]);
}
for(i=0;i<n;i++)
{
if((a[i]%2==0)&&(a[i]!=0))
{
count++;
printf("Even numbers are : %d\n",a[i]);
}
}
printf("Number of even numbers are: %d ",count);
getch();
}
