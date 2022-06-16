//Interchanging of order of numbers
#include <stdio.h>
#include<conio.h>
#include <string.h>
int main()
{
char a[2], b[2];
printf("Enter a number to be reversed : ");
scanf("%s",a);
strcpy(b,a);
strrev(b);
printf("The reversed number is %s",b);
getch();
}
