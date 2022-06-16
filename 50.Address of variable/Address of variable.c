#include<stdio.h>
#include<conio.h>
void main()
{
char a;
int x;
float p,q;
a='A';
x=125;
p=10.25,q=18.76;
printf("%c is stored at %u \n",a,&a);
printf("%d is stored at %u \n",x,&x);
printf("%f is stored at %u \n",p,&p);
printf("%f is stored at %u \n",q,&q);
getch();
}
