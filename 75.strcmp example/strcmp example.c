#include<stdio.h>
#include<conio.h>
void main()
{
char a[100],b[100];
int result;
printf("Enter a string : ");
scanf("%s",a);
printf("Enter a string : ");
scanf("%s",b);
result=strcmp(a,b);
if(result==0)
{
printf("Strings entered are same");
}
else
{
printf("Strings are not same");
}
getch();
}
