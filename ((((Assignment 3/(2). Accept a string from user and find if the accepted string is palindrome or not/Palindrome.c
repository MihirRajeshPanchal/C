//Check if the Number entered is palindrome or not
#include <stdio.h>
#include<conio.h>
#include <string.h>
int main()
{
char a[100], b[100];

printf("Enter a string to check if it's a palindrome : ");
gets(a);

strcpy(b,a);
strrev(b);

if(strcmp(a,b)==0)
{
printf("The string is a palindrome.\n");
}
else
{
printf("The string isn't a palindrome.\n");
}
getch();
}
