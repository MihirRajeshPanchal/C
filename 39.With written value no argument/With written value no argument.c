#include<stdio.h>
#include<conio.h>

int add(void);
void main()
{
int d;
d=add();
printf("Addition is = %d\n",d);
getch();
}
int add(void)
{
int a,b,c;
printf("Enter a number : ");
scanf("%d",&a);
printf("Enter a number : ");
scanf("%d",&b);
c=a+b;
return(c);


}
