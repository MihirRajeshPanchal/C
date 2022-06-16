//Write a program to find the alphabet is equal to another alphabet or not

#include<stdio.h>
#include<conio.h>

void main()
{
int a1,a2;

printf("Enter a alphabet : ");
scanf("%c",&a1);
fflush(stdin);
printf("Enter a alphabet : ");
scanf("%c",&a2);

(a1==a2)?
 printf("%c is equal to %c",a1,a2):
 printf("%c is not equal to %c",a1,a2);

getch();
}

