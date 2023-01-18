/*Write a C program to output the following multiplication table */
#include<stdio.h>
int main(){
    int i, n,result;
    printf("Input a value for n :");
    scanf("%d", &n);
    for(i=1;i<=10;i++){
       printf("%d*%d=%d\n", n, i,n*i); 
    }
    return 0;

}