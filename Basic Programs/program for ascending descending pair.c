/* Write a C program to check whether two numbers in a pair is in
 ascending order or descending order.
 for example:
 Input a pair: 10, 2
 Input first number of the pair : 10
 Input second number if the pair : 2
 Output:
 "The pair is descending"
 */
#include<stdio.h>
int main() {
    int x,y;
    printf("Input a pair of number(for example: 10,2)\n" );
    printf("Input first number of the pair : ");
    scanf("%d", &x);
    printf("Input second number of  the pair :");
    scanf("%d", &y);
    if(x>y){
        printf("The pair is in descending order!\n");
    } else {
        printf("The pair is in ascending order!");
    }
    return 0;

}