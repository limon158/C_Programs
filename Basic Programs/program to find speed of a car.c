/*Write a C program that reads the value of distance travelled by a car the
time  taken from the ssame. Next compute the speed at which  the car travelled.*/
#include<stdio.h>
#include<math.h>
int main()
{
    //d=distance,t=time, v=velocity
    int d,t;
    float v;
    printf("Input distance value :");
    scanf("%d", &d);
    printf("Input time value :");
    scanf("%d", &t);
    //velocity=distance/time
    v=(d/t);
    printf("Velocity of the car is : %.2f", v);

    return 0;

} 