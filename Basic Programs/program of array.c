/* Write a C program to read and print the elements of an array of 
length 7, before print, put the triple of the previous position starting 
from the second position of the array
*/
#include<stdio.h>
int main() {
    int n[50], x, i;
    printf("Input the first number of the array :");
    scanf("%d", &x);
    for(i=0; i<=49; i++) {
        n[i]=x;
        x=3*x;
    } for(i=0; i<=49;i++) {
        printf("n[%d]=%d\n", i, n[i]);
    }
    return 0;

}
