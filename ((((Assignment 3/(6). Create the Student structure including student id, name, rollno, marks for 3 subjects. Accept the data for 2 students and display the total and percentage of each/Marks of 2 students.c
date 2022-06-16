//Program for displaying two marks of subjects for two student and doing PERCENTAGE
#include<stdio.h>
#include<conio.h>
struct student
{
int rollno;
int id;
char name[100];
float marks[4];
int total;
float percentage;
};
void main()
{
struct student a[2];
int i,j;
printf("Enter student database :\n");
for(i=0;i<2;i++)
{
printf("Enter student name : ");
scanf("%s",&a[i].name);
fflush(stdin);
printf("Enter student roll no : ");
scanf("%d",&a[i].rollno);
fflush(stdin);
printf("Enter student ID : ");
scanf("%d",&a[i].id);
a[i].total=0;
for(j=1;j<4;j++)
{
printf("Enter student marks for subject out of 100 : ");
scanf("%f",&a[i].marks[j]);
a[i].total=a[i].total+a[i].marks[j];
}
a[i].percentage=((float)a[i].total/3);
}
for(i=0;i<2;i++)
{
printf("\nPercentage achieved by %s is %0.3f \n",a[i].name,a[i].percentage);
}
getch();
}
