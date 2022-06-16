//Program to illustrate use of +
#include<stdio.h>
#include<conio.h>
void main()
{
int x,y;
int *ptr;

x=10;
ptr=&x;
y=*ptr;
printf("Value of x is %d \n",x);
printf("%d is stored at %u \n",x,&x);
printf("%d is stored at %u \n",*ptr,ptr);
printf("%d is stored at %u \n",y,&y);
*ptr=99;
printf("Now x is %d at %u",x,&x);
getch();
}
