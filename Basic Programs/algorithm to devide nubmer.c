/*Devolop an algorithm to devide one numer by another 
number and find the quotient: */
#include<stdio.h>
int main() {
    int a, b; 
    double q;  //q means quotient
    printf("Input a number for a :");
    scanf("%d", &a);
    printf("Input a number for b :");
    scanf("%d", &b);

    if(b != 0){
        q=a/b;
    }
    printf("\nQuotient is : %.4lf", q);
    return 0;
}