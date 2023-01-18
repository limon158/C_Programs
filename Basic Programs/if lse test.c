#include<stdio.h>
int main()
{
    int i, a;
    scanf("%d", &a);
    if(a<2)
    {
        printf("Your input is less than two");
    }
    else if(a==2)
    {
        printf("Your input is eqal to two");
    }
    else if(a>2)
    {
        printf("Your input greater than two");
    }
}