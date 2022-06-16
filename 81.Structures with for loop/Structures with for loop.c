#include<stdio.h>
#include<conio.h>
struct student
{
char name[20];
int rollno;
char blood;
};
void main()
{
struct student a[2];
int i;
printf("Enter student database :\n");
for(i=1;i<=2;i++)
{
printf("Enter student name : ");
scanf("%s",a[i].name);
printf("Enter student roll no : ");
scanf("%d",&a[i].rollno);
fflush(stdin);
printf("Enter student blood group : ");
scanf("%c",&a[i].blood);
}
for(i=1;i<=2;i++)
{
printf("You have entered following data : %d\n",i);
printf("Name = %s\n",a[i].name);
printf("Roll no = %d \n",a[i].rollno);
printf("Blood Group = %c \n",a[i].blood);
}
getch();
}
