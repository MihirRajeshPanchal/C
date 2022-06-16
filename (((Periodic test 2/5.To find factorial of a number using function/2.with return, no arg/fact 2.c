//with return no argument
#include<stdio.h>
#include<conio.h>
int factorial(void);
void main()
{
int d;int f;
d=factorial();
printf("Factorial = %d\n",d);
return 0;
getch();
}
int factorial()
{
int i=1,f=1,n;
printf("Enter an integer number : ");
scanf("%d",&n);
while(i<=n)
{
f=f*i;
i++;
}
return f;
}

