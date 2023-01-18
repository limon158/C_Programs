/* C program for solve a math
  result= int1+int2
  */

#include<stdio.h>
#include<math.h>
int main() {
    double int1, int2, result;

    printf("Enter the value of int1: ");
    scanf("%lf", &int1);
    printf("Enter the value of int2: ");
    scanf("%lf", &int2);

    result=int1+int2;
    printf("\nThe result is :%lf", result);

    return 0;
 
 }