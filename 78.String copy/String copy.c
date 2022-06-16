//Write a program for string copy
#include<stdio.h>
#include<conio.h>

void main()
{
char a[100],b[100];
int length;
printf("Enter your name : ");
gets(a);
printf("Your name is : ");
puts(a);
strcpy(b,a);
printf("You have copied the string :");
puts(b);
getch();
}
