/*
24. Write a C program that reads two integers and checks whether they are
 multiplied or not
*/
#include<stdio.h>
int main()
{
    int a, b;
    printf("Input a value for a :");
    scanf("%d", &a);
    printf("Input a value for b :");
    scanf("%d", &b);

    if(b%a==0)
    {
        printf("Multiplied");
    }
    else
    {
        printf("Not Multiplied");
    }
    return 0;
}