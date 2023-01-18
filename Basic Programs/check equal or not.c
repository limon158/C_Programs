#include<stdio.h>
void main(){
int num1, num2;

printf("Enter the value for Number1 and Number2:");
scanf("%d%d", &num1, &num2);
if(num1==num2)
    printf("Number1 and Number2 are Equal\n");
else
    printf("Number1 and Number2 are not Equal\n");

}
