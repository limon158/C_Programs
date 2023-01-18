
/*
15. Write a C program to calculate the distance between the two points.
*/
#include<stdio.h>
int main()
{
    int x1, x2, y1, y2; 
    double result, distance;

    printf("Input value of x1 : ");
    scanf("%d", &x1);
    printf("Input value for x2 :");
    scanf("%d", &x2);
    printf("Input value for y1 : ");
    scanf("%d", &y1);
    printf("Input value for y2 :");
    scanf("%d", &y2);
    //Nou apply formula for finding distance
    result = ((x2-x1)*(x2-x1)) + ((y2-y1)*(y2-y1));
    distance = sqrt(result);
    printf("The distance of two point is : %.4lf", distance);

    return 0;
}