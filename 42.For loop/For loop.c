#include<stdio.h>
#include<conio.h>

void main()
{
char c;
int i;
printf("Enter your initials : ");
scanf("%c",&c);
for(i=1;i<=10;i++)
{
printf("Your initials are %c\n",c);
}
printf("Thank you");
getch();
}
