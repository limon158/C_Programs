

// write a program for print a multiplication table.

#include<stdio.h>
int main()
{
    int a, i, result;
    printf("input a number that mumltiplication table you want : ");
    scanf("%d", &a);
    for(i=1; i<=10; i++)
    {
        result = a*i;

        printf("%d * %d = %d\n", a, i, result);

    }
  return 0;
}