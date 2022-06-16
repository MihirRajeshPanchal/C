#include<stdio.h>
#include<conio.h>

void main()
{
int a;

printf("\nEnter number 1 : ");
scanf("%d",&a);

switch(a%2)
{
case 0:
       printf("%d is an even number",a);
       break;
case 1:
       printf("%d is an odd number",a);

}
getch();
}
