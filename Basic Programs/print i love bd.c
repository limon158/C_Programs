#include<stdio.h>
int main()
{
    int i, n, ctr=0;
    printf("input N_");
    scanf("%d", &n);
    for(i=0; i<n; i++)
    {
        ctr++;
        if(i%2==0)
        {
            printf("I love Bangladesh\t");
        }
        else
        {
            printf("I love India\n");
        }
    }
    printf("\n%d Time", ctr);
    return 0;
}