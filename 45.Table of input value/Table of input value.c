//write a program to print table of two
#include<stdio.h>
#include<conio.h>

void main()
{
int c,d;
printf("Enter the number you want to see the table : ");
scanf("%d",&c);
d=1;
while(d<=10)
{
printf("%d * %d = %d\n",c,d,c*d);
d++;
}
getch();
}
