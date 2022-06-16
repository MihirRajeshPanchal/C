#include<stdio.h>
#include<conio.h>
void main()
{
int i,j=0,space,n=1;
for(i=1;i<4;i++)
{
for(space=1;space<4-i;space++)
{
printf("  ");
}
for(j=1;j<=i;j++)
{
printf("%d   ",i);
}
printf("\n");
}
getch();
}
