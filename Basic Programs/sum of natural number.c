/* Devolop an algorithm to find the first N natural numbers whwere 
n would be input by the user.
*/
#include<stdio.h>
int main(){
    int i,n,sum=0;
    printf("Enter a value for n :");
    scanf("%d", &n);
    for(i=1;i<=n;i++){
        sum= sum+i;
    }
    printf("\nSum= %d", sum);
    return 0;
}