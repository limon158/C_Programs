#include<stdio.h>
int main()
{
    int a, b;
    for(a= 1, b=100; a<=100, b>=0; a+=5, b-=10)
    {
        printf("a=%d\tb=%d\n" ,a, b);
    }
}