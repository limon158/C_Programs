/*
11. Write a C program that accepts two item’s weight (floating points' values )
and number of purchase (floating points' values) and calculate the average value
of the items.
*/
#include<stdio.h>         //header file
int main()
{
    int i1, i2;
    float w1, w2, avg_p;

    printf("Input number of item1 : ");
    scanf("%d", &i1);
    printf("Input the weight of item1 :");
    scanf("%f", &w1);
    printf("Input number of item2 : ");
    scanf("%d", &i2);
    printf("Input the weight of item2 :");
    scanf("%f", &w2);

    avg_p = ((w1*i1)+(w2*i2))/(i1+i2);

    printf("\nAvarage value is : %f", avg_p);

    return 0;

}
