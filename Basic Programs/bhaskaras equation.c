/* Write a C program to print the roots of Bhaskara’s formula from 
the given three floating numbers. Display a message if it is not
 possible to find the roots.

 x1= (-b+sqrt((b*b)-(4*a*c)))/(2*a)
 x2= (-b-sqrt((b*b)-(4*a*c)))/(2*a)
 */

#include<stdio.h>
#include<math.h>
int main() {
    double a, b, c, pr;
    printf("Input the value of (a) : ");
    scanf("%lf", &a);
    printf("Input the value of (b) : ");
    scanf("%lf", &b);
    printf("Input the value of (c) : ");
    scanf("%lf", &c);

    pr = (b*b)-(4*(a)*(c));

    if(pr>0 && a!=0) {
        double R1, R2;
        pr=sqrt(pr);
        R1=(-b+pr)/(2*a);
        R2=(-b-pr)/(2*a);

        printf("\nRoot 1 : .3lf\n", R1);
        printf("Root 2 :\n", R2);
    } else {

        printf("\nImpossible to find the Root....Try again\n");
    }
  return 0;
}

