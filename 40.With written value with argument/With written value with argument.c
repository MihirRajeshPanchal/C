//Program with written value and arguments
#include<stdio.h>
#include<conio.h>

int add(int,int);
void main()
{
int a,b,d;
printf("Enter a number : ");
scanf("%d",&a);
printf("Enter a number : ");
scanf("%d",&b);

d=add (a,b);
printf("Addition is = %d\n",d);

getch();
}
int add (int a,int b)
{
int d;
d=a+b;
return(d);


}
