/*
13. Write a C program that accepts three integers and find the maximum of three.
*/
#include<stdio.h>
int main()
{
    int a, b, c;

    printf("Input value for a, b & c : ");
    scanf("%d %d %d", &a, &b, &c);

    if(a>b && a>c)
    {
        printf("Max number is a.");
    }
    else if(b>a && b>c)
    {
        printf("Max number is b.");
    }
    else
    {
        printf("Max number is c.");
    }
    return 0;
}