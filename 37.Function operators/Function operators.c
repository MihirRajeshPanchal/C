#include<stdio.h>
#include<conio.h>
void add(void);
void main()
{
add();
add();
add();
getch();
}
void add (void)
{
int a,b,c;
printf("Enter a value of a : ");
scanf("%d",&a);
printf("Enter a value of b : ");
scanf("%d",&b);
c=a+b;
printf("Addition is = %d\n",c);
}
