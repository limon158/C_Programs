/* Devolop an algorithm to find the maximum of two numbers input by the user.
*/
#include<stdio.h>
int main() {
    int a, b;
    printf("Input first number :");
    scanf("%d", &a);
    printf("Input second number :");
    scanf("%d", &b);

    if(a>b){
        printf("\nFirst is maximum number :%d\n",a);
    } else {
        printf("Second number is  maximum number :%d\n", b);
    }
    return 0;
}