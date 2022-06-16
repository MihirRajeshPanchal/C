#include<stdio.h>
#include<conio.h>

void main()
{
int a,b,c,d;

printf("Enter number 1 : ");
scanf("%d",&a);

printf("Enter number 2 : ");
scanf("%d",&b);

c=a++;
printf("Increment of c after a++ is %d",c);
printf("\n");

c=++a;
printf("Increment of c after ++a is %d",c);
printf("\n");

d=--b;
printf("Decrement of d after --b is %d",d);
printf("\n");

d=b--;
printf("Decrement of d after --b is %d",d);
printf("\n");

getch();

}
