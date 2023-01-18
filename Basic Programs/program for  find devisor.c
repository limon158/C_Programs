/* Devolop a algorithm that reads an integer and find all its devisor*/

#include<stdio.h>
int main() {
    int x,i;
    printf("input an integer :");
    scanf("%d", &x);
    printf("All the devisor of %d are :", x);
    for(i=1; i<=x; i++) {
        if(x%i==0){
            printf("%d,", i);
        }
    }
    return 0 ;
}