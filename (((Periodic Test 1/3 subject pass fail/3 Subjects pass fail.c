//Write a program for calculating percentage of tree subjects with failed categories using switch case statements

#include<stdio.h>
#include<conio.h>

void main()
{
int bex,prc,fcs,Totalachieved,Totalobtainable,a;
float percentage;

printf("Enter Basic electronics marks out of hundred : ");
scanf("%d",&bex);

printf("Enter Programming in C marks out of hundred : ");
scanf("%d",&prc);

printf("Enter Fundamentals of computer systems marks out of hundred : ");
scanf("%d",&fcs);

Totalachieved=bex+prc+fcs;
percentage=Totalachieved/3;
a=percentage;

printf("Your percentage is %.3f\n",percentage);


if(a>100)
{
 printf("You have input wrong marks");
}
else
{
switch(a/10)
{
case 10:
case 9 :
        printf("Congrats you have secured first class");
        break;
case 7:
        printf("Congrats you have secured second class");
        break;
case 5:
        printf("Congrats you have secured third class");
        break;
case 0:
        printf("Bad luck you have failed the examination");
        break;
}
}
getch();
}

