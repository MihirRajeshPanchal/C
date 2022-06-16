//Write a program with sum of two numbers with no written value but with argument

#include<stdio.h>
#include<conio.h>

void add(int,int);
void main()
{
int a,b;
printf("Enter a number : ");
scanf("%d",&a);
printf("Enter a number : ");
scanf("%d",&b);
add (a,b);
getch();
}
void add (int a,int b)
{
int c;
c=a+b;
printf("The addition of two numbers is = %d",c);


}
