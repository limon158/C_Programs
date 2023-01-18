/* C program:

 Problem: Write a C program that read 5 numbers and counts the number of 
positive numbers and print the average of all positive values.
*/
#include<stdio.h>
int main() {
    float numbers[5];
    //Here, po=positive, ng=negative:
    int i, po=0, ng=0;
    printf("Input the first number :");
    scanf("%f", &numbers[0]);
    printf("Input the second number :");
    scanf("%f", &numbers[1]);
    printf("Input the third number :");
    scanf("%f", &numbers[2]);
    printf("Input the fourth number :");
    scanf("%f", &numbers[3]);
    printf("Input the fifth number :");
    scanf("%f", &numbers[4]);

    for(i=0;i<5;i++) {
        if(numbers[i]>0){
            po++;
        } else if(numbers[i]<0) {
            ng++;
        }
    }
    printf("\nNumber of positve number : %d", po);
    printf("\nNumber of negative number :%d", ng);
    return 0;




}