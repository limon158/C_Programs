/*
12. Write a C program that accepts an employee's ID, total worked hours of a month
 and the amount he received per hour. Print the employee's ID and salary (with two
  decimal places) of a particular month. Go to the editor
Test Data :
Input the Employees ID(Max. 10 chars): 0342
Input the working hrs: 8
Salary amount/hr: 15000
Expected Output:
Employees ID = 0342
Salary = U$ 120000.00
*/
#include<stdio.h>
int main()
{
    char id[10];
    int working_hour;
    double salary_hr, salary_month;

    printf("Input the emplyees ID :");
    scanf("%s", &id);
    printf("Input work hour :");
    scanf("%d", &working_hour); 
    printf("Salary per hour :");
    scanf("%lf", &salary_hr);


    printf("Employees ID : %s\n", id);
    
    salary_month = working_hour*salary_hr;

    printf("Salary : %.2lf $", salary_month); 


    return  0;
}