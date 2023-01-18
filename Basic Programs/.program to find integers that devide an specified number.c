/* Write a C program to print all numbers between 1 to 100 which divided by a
 specified number and the remainder will be 3
 */
#include<stdio.h>
int main() {
    int a, l, i;
    printf("Input an integer for a :");
    scanf("%d", &a);
    printf("Input the range for query l :");
    scanf("%d", &l);
    for(i=1; i<=l;i++)
    {
        if(i%x==3)
        {
            printf("%d\n",i);
        }
    }
    return 0;
}