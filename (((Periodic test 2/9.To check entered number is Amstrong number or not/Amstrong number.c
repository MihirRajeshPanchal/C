//To check if the number is amstrong or not
#include <stdio.h>
#include<conio.h>

int main()
{
int num,a,remainder,n = 0;
float result=0.0;

printf("Enter an integer: ");
scanf("%d", &num);

a=num;


for (a=num;a!= 0;++n)
{
a/=10;
}

for(a=num;a!=0;a/=10)
{
remainder=a% 10;
result+= pow(remainder,n);
}
if((int)result==num)
{
printf("%d is an Armstrong number.", num);
}
else
{
printf("%d is not an Armstrong number.", num);
}
getch();
}
