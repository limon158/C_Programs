#include<stdio.h>
int main()
{
    int m, n;
    printf("\nm=");
    scanf("%d", &m);
    printf("\nn=");
    scanf("%d", &n);

    int l, ctr1, ctr2;
    if(m>n)
    {
        for(l=n+1; l<m; l++)
        {
            if(l%2==0)
            {
                ctr1 += l;
            }
        }
        printf("\nsum= %d", ctr1);
    }
    else
    {
        for(l=m+1; l<n; l++)
        {
            if(l%2==0)
            {
                ctr2 +=l;
            }
        }
        printf("\nsum=%d", ctr2);
    }
    return 0;
}