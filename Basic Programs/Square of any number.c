#include<stdio.h>
int numSquare(int n)
{
    return (n*n);
}
int main()
{
    int result = numSquare(10);
    printf("result=%d", result);
    return 0;
}
