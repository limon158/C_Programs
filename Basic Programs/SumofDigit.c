#include<stdio.h>
int main()
{
    int n = 135;
    int sum=0;
    int r;
    while(n>0)
    {
        r=n%10;
        sum = sum+r;
        n = n/10;
    }
    printf("%d", sum);
    return 0;
}