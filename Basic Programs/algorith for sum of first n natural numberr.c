/* Devolop an algorithm to find the first N natural numbers whwere 
n would be input by the user.
*/
#include<stdio.h>
int maim(){
    int n, i, sum=0;
    printf("Input a number for n :");
    scanf("%d", &n);
    i=1;
    while(i<=n){
        sum+=i;
        ++i;
    }
    printf("Sum=%d", sum);
    return 0;
}