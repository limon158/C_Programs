/*  Write a C program that reads two integers and checks whether they 
are multiplied or not.
*/
#include<stdio.h>
int main() {
    int a, b;
    printf("Input the first number :");
    scanf("%d", &a);
    printf("Input the second number :");
    scanf("%d", &b);
    if((a>b);(b%a)==0) {
        printf("\nMultiplied!\n");
    } else {
        printf("Not multiplied!");
    }
  return 0;

}