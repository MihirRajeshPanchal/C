#include<stdio.h>
#include<conio.h>
void main()
{
char a[100],b[100];
int result;
printf("Enter a string 1 : ");
scanf("%s",a);
printf("Enter a string 2: ");
scanf("%s",b);
result=strcmp(a,b);
if(result==0)
{
printf("Strings entered are same");
}
if(result>0)
{
printf("String 1 is bigger than string 2");
}
if(result<0)
{
printf("String 2 is bigger than string 1");
}
getch();
}
