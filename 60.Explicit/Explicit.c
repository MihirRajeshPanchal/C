//explicit
#include<stdio.h>
#include<conio.h>
void main()
{
int a=6, b=2;
float c;
c=a/b;
printf("Value of a,b,c is = %d %d %d\n",a,b,c);
c = (float)a/b;
printf("Value of a,b,c is = %d %d %f\n",a,b,c);
getch();
}
