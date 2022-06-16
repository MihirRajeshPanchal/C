#include<stdio.h>
#include<conio.h>
void main()
{
int a[3];
int i;
printf("Declare three variables :\n");
for(i=0;i<3;i++)
{
scanf("%d",&a[i]);
}
printf("Numbers in the array are:\n");
for(i=0;i<3;i++)
{
printf("%d \n",a[i]);
}
getch();
}
