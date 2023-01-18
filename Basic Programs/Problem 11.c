#include<stdio.h>
int main()
{
 char id[10];
 int hour;
 double value,salary;

   printf("\nInput the Employees ID ( Max 10 chars): ");
   scanf("%s",&id);
   printf("\nInput the working hours :");
   scanf("%d",&hour);
   printf("\nSalary amount per hour: ");
   scanf("%lf",&value);
   salary=value*hour;
   printf("\nEmployees ID = %s \nSalary = US$ %.2lf", id, salary);


    return 0;
 }
