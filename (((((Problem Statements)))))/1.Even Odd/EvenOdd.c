#include<stdio.h>
#include<conio.h>

void main()
{
    int num;
    printf("Enter A Number : ");
    scanf("%d",&num);

    switch(num%2)
    {
    case 1:
        printf("Number %d is odd",num);
        break;
    case 0:
        printf("Number %d is even",num);
        break;
    }
}
