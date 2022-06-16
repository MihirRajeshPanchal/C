// program to swap numbers using pointer OR Call by reference OR passing pointer as function arguement
#include<stdio.h>
#include<conio.h>
void swap(int *, int *);
void main()
{
int x,y;
printf("Enter first number : ");
scanf("%d",&x);
printf("Enter second number : ");
scanf("%d",&y);
printf("Before swap x=%d, y=%d\n",x,y);
swap(&x,&y); // actual parameter
printf("\nAfter swap x=%d, y=%d\n",x,y);
getch();
}
void swap(int *x, int *y) // formal parameter
{
int temp;
temp=*x;
*x=*y;
*y=temp;
printf("During swap x=%d, y=%d", *x,*y);
}


