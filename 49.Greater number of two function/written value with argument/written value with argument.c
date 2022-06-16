#include<stdio.h>
#include<conio.h>

int great(int,int);
void main()
{
int x,y,z;
printf("Enter a number : ");
scanf("%d",&x);
printf("Enter a number : ");
scanf("%d",&y);

z=great(x,y);
printf("%d is greater",z);

getch();
}
int great(int x,int y)
{
if(x>y)
{
return(x);
}
else
{
return(y);
}
}
