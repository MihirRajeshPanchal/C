//Write a program for scanning your name and count number of characters
#include<stdio.h>
#include<conio.h>
void main()
{
char a[100];
int count=0,i;
printf("Enter your name : ");
gets(a);
printf("Your name is : %s ",a);
for(i=0;a[i]!='\0';++i)
{
count++;
}
printf("\nThe number of characters in your name is : %d",count);
getch();
}
