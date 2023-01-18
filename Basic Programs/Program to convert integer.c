/* Write a C program to convert a given integer (in days) to years,
 months and days, assumes that all months have 30 days and all years
 have 365 days.
 
 Outpit:
 Years
 Month
 Days
 */

#include<stdio.h>
int main() {

    int ndays, years, month, days;
    printf("Input number of days :");
    scanf("%d", &ndays);

    years=(int)ndays/365;
    ndays=ndays-(365*years);
    month=(int)ndays/30;
    days=(int)ndays-(month*30);

    printf("\n%d Year\n%d Month\n%d Days", years, month, days);

    return 0;

}