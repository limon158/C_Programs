/*
#include<stdio.h>
#define PERIOD 10
#define PRINCIPLE 5000.00
int main()
{
    int year;
    float intrate, amount, value;
    amount=PRINCIPLE;
    intrate=0.11;
    year=0;
    while(year<=PERIOD)
    {
        printf("%2d year and%8.2f Taka", year, amount);
        value=amount+intrate*amount;
        year=year+1;
        amount=value;
    }
    return 0;
}
*/