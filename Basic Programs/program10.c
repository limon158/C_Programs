/* 
10. Write a C program that accepts two integers from the user and calculate the
product of the two integers
*/
#include<stdio.h>
int main()
{
    int a, b, mul;   //variable declaration

    // take input from user
    printf("Input the value  of a : ");
    scanf("%d", &a);
    printf("Input the value of b :");
    scanf("%d", &b);

    mul = a * b;

    printf("Product is : %d", mul);

    return 0;

}