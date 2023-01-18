#include<stdio.h>
void findArea(double l, double w)
{
    double Area = l*w;
    printf("Area=%lf", Area);
}
int main()
{
    double lenth, width;
    printf("\nlenth:");
    scanf("%lf", &lenth);
    printf("\nwidth:");
    scanf("%lf", &width);
    findArea(lenth, width);
    return 0;
}
