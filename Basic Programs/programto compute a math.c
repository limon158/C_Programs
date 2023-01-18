/*Given the values of three variable a,b and c, write a program to compute and display 
the value of x, where
x=a/(b-c)
Execute the program for the fo;;owing values:
a=250, b=85, c=25
*/
#include<stdio.h>
#include<math.h>
int main(){
    int a, b, c;
    double x;
    printf("input a value for a :");
    scanf("%d", &a);
    printf("Input a value for b :");
    scanf("%d", &b);
    printf("Input a value  for c :");
    scanf("%d", &c);

      x = (a/(b-c));

    printf("\nValue of x is :%lf", x);
    return 0;
}