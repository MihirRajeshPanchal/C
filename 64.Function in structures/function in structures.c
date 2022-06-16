#include<stdio.h>
#include<conio.h>
void array(int a[]);
void main()
{
    int a[5],i;
    printf("Enter the array element : \n");
    for(i=0;i<5;i++)
    {
    scanf("%d",&a[i]);
    }
    array(a);
    printf("Function excecution done \n");
    getch();
}
void array(int a[])
{
    int i;
    printf("You have entered following element : \n");
    for(i=0;i<5;i++)
    {
        printf("%d\n",a[i]);
    }
}
