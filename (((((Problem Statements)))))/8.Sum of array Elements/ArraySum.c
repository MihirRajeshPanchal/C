#include<stdio.h>
#include<conio.h>

int sumArray(int a[],int n)
{
    int sum=0,i;
    for(i=0;i<n;i++)
    {
        sum=sum+a[i];
    }
    return sum;
}
void main()
{
    int a[] = { 0, 23, 14, 12, 9 };
    int n = sizeof(a) / sizeof(a[0]);
    int *p=sumArray(a,n);
    printf("The sum of n numbers is %d",p);
}
