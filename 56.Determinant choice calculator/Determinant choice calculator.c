#include<stdio.h>
#include<conio.h>
void main()
{
int i,j,determinant,a[3][3],b[2][2],choice;

printf("*******MENU*******");
printf("\n(1). Determinant 3 by 3");
printf("\n(2). Determinant 2 by 2");
printf("\nEnter your choice from menu : ");
scanf("%d",&choice);

switch(choice)
{
case 1:
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
       break;
case 2:
for(i=0;i<2;i++)
{
for(j=0;j<2;j++)
{
printf("Enter value of numbers is matrix : ");
scanf("%d",&b[i][j]);
}
}
printf("Numbers entered are :\n");
for(i=0;i<2;i++)
{
for(j=0;j<2;j++)
{
printf("%d\t",b[i][j]);
}
printf("\n");
}
determinant=(b[0][0]*b[1][1])-(b[0][1]*b[1][0]);
printf("Determinant is = %d",determinant);
break;
default :
        printf("Invalid input");
        break;

}
printf("\nThank you for using my calculator");
getch();
}
