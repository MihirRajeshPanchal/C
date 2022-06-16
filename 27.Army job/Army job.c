//Write a program to decide if the candidate is selected for army or not

 #include<stdio.h>
 #include<conio.h>

 void main()
{
int age,height;
printf("Enter your age : ");
scanf("%d",&age);

printf("Enter your height : ");
scanf("%d",&height);

if((age>=18)&&(height>=5))
 printf("Candidate is allowed to participate in army\n");

else
 printf("Candidate is not allowed to participate in army");
 getch();
 }
