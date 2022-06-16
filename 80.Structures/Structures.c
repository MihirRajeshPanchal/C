#include<stdio.h>
#include<conio.h>
struct student
{
char name[100];
int rollno;
char status[100];

};
void main()
{
struct student a;
printf("Enter student database :\n");
printf("Enter student name : ");
scanf("%s",a.name);
printf("Enter student roll no : ");
scanf("%d",&a.rollno);
fflush(stdin);
printf("Enter student status : ");
scanf("%s",a.status);
printf("You have entered following data :\n ");
printf("Name = %s\n",a.name);
printf("Roll no = %d\n",a.rollno);
printf("Status = %s\n",a.status);
getch();
}
