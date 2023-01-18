/*
6.Write a c program to compute the perimeter and area of a circle an the radious of the 
circle taken from usetr.
*/
#include<stdio.h>
int main()
{
int radious;
float perimeter, area;
printf("Input the  radious of the circle(Inch) :");
scanf("%d", &radious);

perimeter=2*3.1416*radious;
printf("The radious of the circle is :%f inch/n", perimeter);

area=3.1416*radious*radious;
printf("\nThe area of the circle is : %f square inch", area);
return 0;

}
