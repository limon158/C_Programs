/*Write a C program that accepts an employee's ID, total worked hours of 
a month and the amount he received per hour. Print the employee's ID and
 salary (with two decimal places) of a particular month.

Test Data :
The employees ID:0342 (Max 1o chars)
The working hour: 8hrs
Salary amount/hrs: 15000
*/

#include<stdio.h>
int main(){
    char id[10];
    int hour;
    double value, salary;

    printf("input the Employees ID(Max. 10 chars) : \n");
    scanf("%s",&id);

    printf("Input the working hour :\n");
    scanf("%d", &hour);

    printf("Input Salary amount/hr :\n");
    scanf("%lf", &value);

      salary=value*hour;

    printf("Employees ID=%s\nSalary=U$ %2lf\n,id,salary");


   return 0;
}