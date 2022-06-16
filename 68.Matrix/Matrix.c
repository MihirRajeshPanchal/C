#include<stdio.h>
#include<conio.h>
void main()
{
int a[3][3],i,j;
for(i=0;i<3;i++)
{
for(j=0;j<3;j++)
{
printf("Enter value of numbers is matrix : ");
scanf("%d",&a[i][j]);
}
}
printf("Numbers entered are :\n");
for(i=0;i<3;i++)
{
for(j=0;j<3;j++)
{
printf("%d\t",a[i][j]);
}
printf("\n");
}
getch();
}
