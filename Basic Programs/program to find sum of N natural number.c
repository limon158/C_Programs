/* Develop an algorithm to find the sum of the first n natural number 
N would be input bu user */
#include<stdio.h>
int main() {
    int n, i, sum;
    i=1;
    sum=0;
    printf("Input a number for N :");
    scanf("%d", &n);
    while(i<=n){
        sum=sum+i;
        i++;
    }
    printf("The sum of first %d natural number=%d", n,sum);
    return 0;
}