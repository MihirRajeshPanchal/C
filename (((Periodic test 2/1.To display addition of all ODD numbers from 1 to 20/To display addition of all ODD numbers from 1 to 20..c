//To display addition of all ODD numbers from 1 to 20.
#include<stdio.h>
#include<conio.h>
void main()
{
int i,sum=0;
for(i=1;i<20;i++)
{
if(i%2!=0)
{
sum=sum+i;
}
}
printf("The sum of all odd numbers between 1 to 20 is : %d",sum);
getch();
}
