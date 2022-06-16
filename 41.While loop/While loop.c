//
#include<stdio.h>
#include<conio.h>

void main()
{
char c;
int i=1;
printf("Enter your initials : ");
scanf("%c",&c);
while(i<=10)
{
printf("Your initials are %c\n",c);
i++;

}
printf("Thank you");
getch();
}
