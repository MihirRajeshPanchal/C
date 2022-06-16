#include<stdio.h>
#include<conio.h>
void main()
{
int a[3][3],i,j,determinant;
for(i=0;i<3;i++)
{
for(j=0;j<3;j++)
{
printf("Enter value of numbers is matrix : ");
scanf("%d",&a[i][j]);
}
}
printf("Numbers entered are :\n");
for(i=0;i<3;i++)
{
for(j=0;j<3;j++)
{
printf("%d\t",a[i][j]);
}
printf("\n");
}
determinant=(a[0][0]*(a[1][1]*a[2][2]-a[2][1]*a[1][2]))-(a[0][1]*(a[1][0]*a[2][2]-a[1][2]*a[2][0]))+(a[0][2]*(a[1][0]*a[2][1]-a[2][0]*a[1][1]));
printf("Determinant is = %d",determinant);
getch();
}
