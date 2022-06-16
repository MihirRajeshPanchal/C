//Write a program for string length
#include<stdio.h>
#include<conio.h>
void main()
{
int length;
char a[100];
printf("Enter your name : ");
gets(a);
printf("Your name is : ",a);
puts(a);
length=strlen(a);
printf("String length is : %d",length);
getch();
}
