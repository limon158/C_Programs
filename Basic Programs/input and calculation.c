/* Write a program that accept two integer from the user and calculate the 
sum of two integer.

test data : take from user
*/

#include<stdio.h>
int main(){
    
    int integer1, integer2, result;

    printf("Input the first integer : \n");
    scanf("%d", &integer1);

    printf("Input the second integer : \n ");
    scanf("%d", &integer2);

    result=integer1+integer2;

    printf("The sum of two integer is : %d", result);

  return 0;
}