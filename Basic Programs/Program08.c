/* Write a C proogram to convert specified days into years, weeks and days 
*/

#include<stdio.h>
int main() 
{
    //at first we need to declared variable
    int n, years, weeks, days;
    //now take input for specified number of days from user

    printf("Input number of days to convert :");
    scanf("%d", &n);
    //now apply forrmula to convert
    years= n/365;
    weeks= (n%365)/7;
    days= n-((years*365) + (weeks*7));

    printf("Years : %d\n", years);
    printf("weeks :%d\n", weeks);
    printf("Days : %d\n", days);
    return 0;
}