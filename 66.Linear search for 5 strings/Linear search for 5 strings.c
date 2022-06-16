#include<stdio.h>
#include<conio.h>
void main()
{
char a[100],b[100],c[100],d[100],e[100],r[100];
printf("Enter a string : ");
scanf("%s",a);
printf("Enter a string : ");
scanf("%s",b);
printf("Enter a string : ");
scanf("%s",c);
printf("Enter a string : ");
scanf("%s",d);
printf("Enter a string : ");
scanf("%s",e);
printf("Enter a random string : ");
scanf("%s",r);

if((strcmp(r,a)==0)||(strcmp(r,b)==0)||(strcmp(r,c)==0)||(strcmp(r,d)==0)||(strcmp(r,e)==0))
{
printf("Entered random string is a match to the entered strings previously");
}
else
{
printf("Entered random string is not a match to the entered strings previously");
}
getch();
}
