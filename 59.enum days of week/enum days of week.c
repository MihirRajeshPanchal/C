#include<stdio.h>
#include<conio.h>
#include<string.h>

enum weekday
{
monday,tuesday,wednesday=7,friday
};
void main()
{
enum weekday wd;
wd=friday;
printf("%d",wd);
getch();
}
