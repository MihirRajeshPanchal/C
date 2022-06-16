//Program for creating simple calculator using switch case statement
#include<stdio.h>
#include<conio.h>

void main()
{
int a,b,sum,difference,product,division,choice,square1,square2;

printf("*******MENU*******");
printf("\n(1). Addition");
printf("\n(2). Subraction");
printf("\n(3). Multiplication");
printf("\n(4). Division");
printf("\n(5). Square of first number");
printf("\n(6). Square of second number");

printf("\nEnter number 1 : ");
scanf("%d",&a);

printf("\nEnter number 2 : ");
scanf("%d",&b);

printf("Enter your choice from menu : ");
scanf("%d",&choice);

switch(choice)
{
case 1:
       sum=a+b;
       printf("Addition of two numbers is = %d",sum);
       break;
case 2:
       difference=a-b;
       printf("Difference of two numbers is = %d",difference);
       break;
case 3:
       product=a*b;
       printf("Product of two numbers is = %d",product);
       break;
case 4:
       division=a/b;
       printf("Division of two numbers is = %d",division);
       break;
case 5:
       square1=a*a;
       printf("Square of first number = %d",square1);
       break;
case 6:
       square1=b*b;
       printf("Square of second number = %d",square2);
       break;

default :
        printf("Invalid input");
        break;

}
printf("\nThank you for using my calculator");
getch();
}
