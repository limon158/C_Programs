/* 32.Write a C program to print all numbers between 1 to 100 which 
divided by a specified number and the remainder will be 3.*/
#include<stdio.h>
int main() {
    int a,i;
    printf("Input an integer :");
    scanf("%d", &a);

    for(i=1;i<=100;i++) {
        if((i%a)==3){
            printf("%d\n", i);
        }
    }
    return 0;
}