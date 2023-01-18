/*
5. Write a C program to compute the perimeter and area of a rectangle with 
a height of 7 inches. and width of 5 inches
*/
#include<stdio.h>    //Header file
int main()           //Main functon
{
    int height, width, perimeter, area;
    //Body start of the function
    height=7;
    width=5;

    perimeter=2*(height+width);        //Apply law of peremeter
    printf("\nPeremetr of the Triangle: %d inches\n", perimeter);

    area=height*width;                  //Apply law of area
    printf("Area of the triangle : %d square inches\n", area);

    return 0;
    //The program is ready to run now

}