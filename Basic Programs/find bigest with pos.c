#include<stdio.h>
#define N 100
int main()
{
    int i, n, x[N], p;
    printf("n= ");
    scanf("%d", &n);
    printf("\n");
    for(i=0; i<n; i++)
    {
        printf("index-[%d]:", i);
        scanf("%d", &x[i]);
    }
    int j, m;
    m=x[0];
    for(j=1; j<n; j++)
    {
        if(m<x[j])
        {
            m=x[j];
            p=j;
        }
    }
    
    printf("\nm=%d", m);
    printf("\np=%d", p);
    printf("\n");
    
    return 0;
}