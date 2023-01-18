/*
 Given two integrs 20 ans 10 , write a program that usases a function add() 
 to add these two numbers ad sub() to find difference oof these two numbers 
 and then display the sum and difference in  the following form:
         20+10=30
         20-10=10
*/
#include<stdio.h>
int main(){
    int num1, num2, sum, sub;
    printf("Input value for num1 : ");
    scanf("%d", &num1);
    printf("Input value for num2 : ");
    scanf("%d", &num2);
    if(num1>num2)
    {

    sum=num1+num2;
    sub=num1-num2;

    printf("%d+%d=%d", num1,num2,sum);
    printf("\n");
    printf("%d-%d=%d", num1,num2,sub);
    }
    else
    {
        printf("\nError!! Num1 must be greater");
    }
    return 0;

}
