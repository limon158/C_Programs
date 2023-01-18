#include<stdio.h>
#define PI 3.1416
void findArea(double r)
{
    double Area = PI*r*r;
    printf("Area=%lf", Area);
}
int main()
{
    double radious;
    printf("Radious:");
    scanf("%lf", &radious);
    findArea(radious);
    return 0;
}