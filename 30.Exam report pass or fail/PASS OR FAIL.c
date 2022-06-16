//Write a program to decide if student is passed or fail in exam

 #include<stdio.h>
 #include<conio.h>

 void main()
{
int Mathematics,Science,Drawing,Total;

printf("Enter Mathematics marks : ");
scanf("%d",&Mathematics);

printf("Enter Science marks : ");
scanf("%d",&Science);

printf("Enter Drawing marks : ");
scanf("%d",&Drawing);

Total=Mathematics+Science+Drawing;

if(Total>=35)
 printf("Candidate passed the exam\n");

else
 printf("Candidate failed the exam");
 getch();
 }
