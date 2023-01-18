/* Write a C program that read 5 numbers and sum of all odd values 
between them. 
*/
#include<stdio.h>
int main() {
    int i, numbers[5], total=0;
    printf("Input first number :");
    scanf("%d", &numbers[0]);
    printf("Input second numbers :");
    scanf("%d", &numbers[1]);
    printf("Input third number : ");
    scanf("%d", &numbers[2]);
    printf("Input Fourth number :");
    scanf("%d", &numbers[3]);
    printf("Input fifth number :");
    scanf("%d", &numbers[4]);

    for( i=0;i<5;i++) {
        if((numbers[i]%2)!=0) {
            total+=numbers[i];
        }
    }
    printf("\nSum of all odd numbers is : %d", total);
    return 0;
}