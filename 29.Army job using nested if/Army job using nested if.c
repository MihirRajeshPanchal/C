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

if(age>=18)
{
  if(height>=5)
  {
  printf("Candidate is allowed to participate in army\n");
  }
else
  {
  printf("Your height is in adequate for indian army");
  }
}
else
 {
  if(height<5)
  {
  printf("Candidate is not allowed to participate in army due to inadequate height and age");
  }
else
  {
  printf("Your age is in adequate for indian army");
  }
 }
 getch();
 }
