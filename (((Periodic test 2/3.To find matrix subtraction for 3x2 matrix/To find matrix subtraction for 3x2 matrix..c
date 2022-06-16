//To find matrix subtraction for 3x2 matrix.
#include<stdio.h>
#include<conio.h>
void main()
{
int a[3][2],i,j,b[3][2];
int c,d,e,f,g,h;
for(i=0;i<3;i++)
{
for(j=0;j<2;j++)
{
printf("Enter value of numbers in matrix 1 : ");
scanf("%d",&a[i][j]);
}
}
printf("Numbers entered are :\n");
for(i=0;i<3;i++)
{
for(j=0;j<2;j++)
{
printf("%d\t",a[i][j]);
}
printf("\n");
}

for(i=0;i<3;i++)
{
for(j=0;j<2;j++)
{
printf("Enter value of numbers in matrix 2 : ");
scanf("%d",&b[i][j]);
}
}
printf("Numbers entered are :\n");
for(i=0;i<3;i++)
{
for(j=0;j<2;j++)
{
printf("%d\t",b[i][j]);
}
printf("\n");
}
c=a[0][0]-b[0][0];
d=a[0][1]-b[0][1];
e=a[1][0]-b[1][0];
f=a[1][1]-b[1][1];
g=a[2][0]-b[2][0];
h=a[2][1]-b[2][1];
printf("The matrix subraction of the two matrix is :\n");
printf("%d       %d       \n",c,d);
printf("%d       %d       \n",e,f);
printf("%d       %d       ",g,h);
getch();
}
