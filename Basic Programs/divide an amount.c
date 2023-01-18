#include<stdio.h>
int main()
{
    int amount, i, result;
    printf("Input your amount : ");
    scanf("%d", &amount);
    for(i=0; i<amount; i++);
    {
    result = amount/2;
    printf("result = %d\n", result);
    }
    
return 0;
}