#include<stdio.h>
int main()
{
    int i, amount;
    printf("Input an amount : ");
    scanf("%d", &amount);
    if(amount%2==0)
    {
    for(i=1; i<=amount; i++)
    {
        amount = amount/2;
        printf("%d\n", amount);
    }
    }
    
    else
    {
        printf("You must input a even number!!");
    }
return 0;
}