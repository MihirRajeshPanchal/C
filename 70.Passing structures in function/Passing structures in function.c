//passing structure in function
#include<stdio.h>
#include<conio.h>
struct student
{
char name[20];
int rno;
char bg;
};
void st_print(struct student s1);
void main()
{
    struct student s1;
    int i;
    printf("Enter STUDENT DATABASE INFORMATION: \n");
    printf("Enter student name : ");
    scanf("%s",s1.name);
    printf("Enter student Roll number: ");
    scanf("%d",&s1.rno);
    fflush(stdin);
    printf("Enter student blood group : ");
    scanf("%c",&s1.bg);
    st_print(s1);
    getch();
}
void st_print(struct student s1)
{
    int i;
    printf("You have entered following data for student: \n");
    printf("name= %s\n",s1.name);
    printf("Roll Number= %d \n",s1.rno);
    printf("Blood group= %c\n",s1.bg);
}
