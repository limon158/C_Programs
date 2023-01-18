/* Write a program to to compute the circumference and area of a circle by
given, Radious= 6

we know,
pi=3.1416
Area of a circle=pi*r*r
Circumferenc of a circle= 2*pi*r
*/


#include<stdio.h>
int main(){

     int radious;
     float area, circumference;
     radious=6;

     circumference= 2*2.1416*radious;
     printf("Circumference of the Circle : %f inches\n", circumference);

     area= 3.1416*radious*radious;
     printf("Area of the circle          : %f inches\n", area);

  return 0;
}