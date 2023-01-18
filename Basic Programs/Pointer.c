#include<stdio.h>
int main()
{
    int x=10;
    int *p;
    p = &x;
    printf("\nvalue of x=%d", x);
    printf("\nAddress of x=%x", &x);
    printf("\nAddress of p=%x", p);
    printf("\nContent of p=%d", *p);
}