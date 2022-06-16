//Write a program to reverse a string
#include <stdio.h>
#include<conio.h>
#include <string.h>
int main()
{
char a[100], b[100];

printf("Enter a string to be reversed : ");
gets(a);


strrev(a);
printf("The reversed string is : %s ",a);
getch();
}
