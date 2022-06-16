//Write a program for string concative
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
printf("Enter your name : ");
gets(b);
printf("Your name is : ");
puts(b);
strcat(a,b);
printf("Merged string is :");
puts(a);
getch();
}
