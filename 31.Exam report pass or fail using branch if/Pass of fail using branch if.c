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

if((Total>=80)&&(Total<=90))
{
 printf("Candidate secured excellent class\n");
}
else if((Total>=70)&&(Total<80))
{
printf("Candidate secured first class\n");
}
else if((Total>=60)&&(Total<70))
{
printf("Candidate secured second class\n");
}
else if((Total>=50)&&(Total<60))
{
printf("Candidate secured third class\n");
}
else if((Total>=35)&&(Total<50))
{
printf("Candidate has performed poorly\n");
}
else if((Total>=0)&&(Total<35))
{
printf("Candidate has failed the exam\n");
}
 getch();
 }
