/* Write a program that accepts principle, rate of interest, time and 
compute the simple interest rate. */
#include<stdio.h>
int main(){
    int principle, int_r, time, simple_int;

    printf("Input principle :");
    scanf("%d", &principle);
    printf("Input Interest Rate :");
    scanf("%d", &int_r);
    printf("Input Time :", &time);
    scanf("%d", &time);

    simple_int=(principle*int_r*time)/100;
    printf("\nSimple Intrest rate = %d", simple_int);
    return 0;
}