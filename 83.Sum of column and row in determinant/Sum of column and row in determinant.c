//Program to find sum of each row and column of 3 by 3 matrix
#include<stdio.h>
#include<conio.h>
void main()
{
int a[3][3],i,j,row1,row2,row3,col1,col2,col3;
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
row1=a[0][0]+a[0][1]+a[0][2];
row2=a[1][0]+a[1][1]+a[1][2];
row3=a[2][0]+a[2][1]+a[2][2];
printf("Sum of Row 1 is %d\n",row1);
printf("Sum of Row 2 is %d\n",row2);
printf("Sum of Row 3 is %d\n",row3);
col1=a[0][0]+a[1][0]+a[2][0];
col2=a[0][1]+a[1][1]+a[2][1];
col3=a[0][2]+a[1][2]+a[2][2];
printf("Sum of Column 1 is %d\n",col1);
printf("Sum of Column 2 is %d\n",col2);
printf("Sum of Column 3 is %d\n",col3);
getch();
}
