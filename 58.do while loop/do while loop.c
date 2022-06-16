#include<stdio.h>
#include<conio.h>
void main()
{
int n;
do
{
printf("Enter an integer : ");
scanf("%d",&n);
}while(n!=0);
printf("You entered zero game over");
getch();
}
