/*Write a C program that accept two integer from the user and calculate the
sum of the two integer
*/
#include<stdio.h>
int main()
{
    // variable declaration
    int a, b, result;
    //now we get input from user
    printf("Input value for a :");
    scanf("%d", &a);
    printf("Input value for b :");
    scanf("%d", &b);
    //now write  formula to sum a and b
    result= a+b;
    //now print the sum of two integer
    printf("The sum is :%d", result);
        
        
return 0;
}