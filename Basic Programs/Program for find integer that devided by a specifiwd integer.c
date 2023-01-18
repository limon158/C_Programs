/*Write a c program that find all integr in 1000 that devide by a specified 
number.
The devider intege will input by user */
#include<stdio.h>
int main() {
    int a, i;
    printf("Input a devider integer :");
    scanf("%d", &a);
    printf("The integers that devided by %d is :\n", a);
    for(i=1; i<=1000; i++)
    {
        if(i%a==0)
        {
            printf("%d,", i);
        }
    }
    return 0;
}