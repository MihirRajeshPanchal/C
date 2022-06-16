//With return with argument
#include<stdio.h>
#include<conio.h>
int factorial(int,int);
int main()
{
int k,f,n;
printf("Enter an integer number : ");
scanf("%d",&n);
k=factorial(n,f);
printf("Factorial = %d\n",k);
return 0;
getch();
}
int factorial(int n,int f)
{
int i=1;
f=1;
while(i<=n)
{
f=f*i;
i++;
}
return f;
}
