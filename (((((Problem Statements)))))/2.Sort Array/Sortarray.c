#include<stdio.h>
#include<conio.h>

int *sort(int number[],int n)
{
    int j,a;
    for (int i = 0; i < n; ++i)
    {
        for (j = i + 1; j < n; ++j)
        {
            if (number[i] > number[j])
            {
                a =  number[i];
                number[i] = number[j];
                number[j] = a;
            }
        }
    }
    return number;
}
void main()
{
    int *p;
    int number[] = { 0, 23, 14, 12, 9 };
    int n = sizeof(number) / sizeof(number[0]);
    p=sort(number,5);
    for (int i=0;i<n;i++)
    {
        printf("%d\n", p[i]);
    }
}
