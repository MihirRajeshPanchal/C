//(4). Create a structure of Bank including - Account number, Account name, deposit amount. Accept the member variable values and display the same.
#include<stdio.h>
#include<conio.h>
struct member
{
char aname[100];
int ano;
char adeposit[100];

};
void main()
{
struct member a;
printf("Enter Bank details :\n");
printf("Enter Account name : ");
scanf("%s",a.aname);
printf("Enter Account number : ");
scanf("%d",&a.ano);
fflush(stdin);
printf("Enter Deposit amount : ");
scanf("%s",a.adeposit);
printf("You have entered following data :\n");
printf("Account name = %s\n",a.aname);
printf("Account number = %d\n",a.ano);
printf("Deposit amount = %s\n",a.adeposit);
getch();
}
