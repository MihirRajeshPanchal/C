//Write a program to check if alphabet is vowel or consonant
#include<stdio.h>
#include<conio.h>

void main()
{
char a;

printf("Enter an alphabet : ");
scanf("%c",&a
      );

if (a=='a'||a=='e'||a=='i'||a=='o'||a=='u'||a=='A'||a=='E'||a=='I'||a=='O'||a=='U')

printf("The alphabet is a vowel");

else

printf("The alpabet is a consonant");

getch();
}
