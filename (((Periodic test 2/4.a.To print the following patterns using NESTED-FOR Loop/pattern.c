#include<stdio.h>
#include<conio.h>
void main()
{
int i,j=0,space;
for(i=0;i<3;i++)
{
for(space=1;space<3-i;space++)
{
printf("  ");
}
for(j=0;j<=i;j++)
{
printf("*   ");
}
printf("\n");
}
getch();
}
