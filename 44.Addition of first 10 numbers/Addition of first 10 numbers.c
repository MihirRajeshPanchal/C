//write a program to display addition of first 10 numbers
#include<stdio.h>
#include<conio.h>

void main()
{
int i, num, sum = 0;

printf("Enter an integer number : ");
scanf ("%d", &num);
for (i = 1; i <= num; i++)
{
sum = sum + i;
}
printf ("Sum of first %d natural numbers = %d\n", num, sum);
getch();
}

