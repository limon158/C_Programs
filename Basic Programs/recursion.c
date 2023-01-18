#include<stdio.h>
int myFunction(int k);
int main()
{
    int result = myFunction(10);
    printf("%d", result);
    return 0;
}
int myfunction(int k)
{
    if(k>0)
    {
        return k + myFunction(k-1);
    }
    else
    {
        return 0;
    }
}