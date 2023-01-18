//find maximum from three integer withut using any loop
#include<stdio.h>
#include<stdlib.h>

int main()
{
    int a, b, c, result, max;

    printf("Input value for a, b and c : ");
    scanf("%d %d %d", &a, &b, &c);

    result = ((a+b)+abs(a-b))/2;
    max = ((result+c)+abs(result-c))/2;

    printf("Maximum number is : %d", max);

    return 0;

}