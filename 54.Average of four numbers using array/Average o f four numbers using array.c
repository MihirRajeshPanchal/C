#include<stdio.h>
#include<conio.h>
void main()
{
int a[4];
int i;
float average,sum=0;
printf("Declare four variables :\n");
for(i=0;i<4;i++)
{
scanf("%d",&a[i]);
sum=sum+a[i];
}

average=sum/4;
printf("Average of entered numbers is %0.3f",average);
getch();
}
