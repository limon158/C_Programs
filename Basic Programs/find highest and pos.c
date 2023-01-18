#include<stdio.h>
int main()
{
    int i, j=0, n, p;
    for(i=1; i<7; i++)
    {
        scanf("%d", n);
        if(n>j)
        {
            j=n;
            p=i;
        }
    }
    printf("%d\n%d\n", j, p);
}

