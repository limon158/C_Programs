#include<stdio.h>
int main(){
    int n, i, sum;
    printf("Input a value for N :");
    scanf("%d", &n);
    i=1;
    sum=0;
    while(i<=n){
        sum=sum+i;
        i++;
    }
    printf("\nThe sum is : %d", sum);
    return 0;
}