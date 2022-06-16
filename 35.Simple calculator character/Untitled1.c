//Program for creating simple calculator using switch case statement
#include<stdio.h>
#include<conio.h>
#include<math.h>

void main()
{
int p,q,sum,difference,product,division,square1,square2;
char a;

printf("*******MENU*******");
printf("\n(a). Addition");
printf("\n(b). Subraction");
printf("\n(c). Multiplication");
printf("\n(d). Division");
printf("\n(e). Square of first number");
printf("\n(f). Square of second number");


printf("\nEnter your choice from menu : ");
scanf("%c",&a);

switch(a)
{
case'a':
       printf("\nEnter number 1 : ");
       scanf("%d",&p);

       printf("\nEnter number 2 : ");
       scanf("%d",&q);

       sum=p+q;
       printf("Addition of two numbers is = %d",sum);
       break;
case'b':
       printf("\nEnter number 1 : ");
       scanf("%d",&p);

       printf("\nEnter number 2 : ");
       scanf("%d",&q);

       difference=p-q;
       printf("Difference of two numbers is = %d",difference);
       break;
case'c':
       printf("\nEnter number 1 : ");
       scanf("%d",&p);

       printf("\nEnter number 2 : ");
       scanf("%d",&q);
       product=p*q;
       printf("Product of two numbers is = %d",product);
       break;
case'd':
       printf("\nEnter number 1 : ");
       scanf("%d",&p);

       printf("\nEnter number 2 : ");
       scanf("%d",&q);

       division=p/q;
       printf("Division of two numbers is = %d",division);
       break;
case'e':
       printf("\nEnter number 1 : ");
       scanf("%d",&p);

       printf("\nEnter number 2 : ");
       scanf("%d",&q);

       square1=p*p;
       printf("Square of first number = %d",square1);
       break;
case'f':
       printf("\nEnter number 1 : ");
       scanf("%d",&p);

       printf("\nEnter number 2 : ");
       scanf("%d",&q);

       square1=q*q;
       printf("Square of second number = %d",square2);
       break;

default :
        printf("Invalid input");
        break;
}
printf("\nThank you for using my calculator");
getch();
}
