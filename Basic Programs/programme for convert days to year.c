/* Write a programme for to convert specified days into years, weeks and days.
[Note: Ignore Leap Year]

test data: 1329;
we know,
       1 year=365 days
       1 week= 7days
*/

#include<stdio.h>
int main(){

     int days, week, year;
     
     printf("Enter number of days that you want to convert : ");
     scanf("%dS",&days);

                              //convert days to year, weeek and days
     year= days/365;
     printf(" Years : %d\n", year);

     week=(days%365)/7;
     printf(" Weeks : %d\n", week);

     days= days-((year*365)+(week*7));
     printf(" Days  : %d\n",days);

    
  return 0;

}
