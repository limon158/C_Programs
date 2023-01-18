/* Write a C program to check whether a given integer is positive even,
 negative even, positive odd or negative odd. Print even if the 
 number is 0.
 */
#include<stdio.h>
int main() {
    int a;
    printf("Input a integer :");
    scanf("%d"), &a;
    if(a==0){
        printf("\nPositive\n");
    } else if(a<0 && (a%2)!=0) {
        printf("Negative odd\n");
    } else if(a<0 && (a%2)==0) {
        printf("Negative even\n");
    }else if(a>0 && (a%2)!=0){
        printf("Positive odd\n");
    }else if(a>0 && (a%2)==0){
        printf("Positive even");
    }
    return 0;
    }
