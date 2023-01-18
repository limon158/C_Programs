#include<stdio.h>
int main()
{
    int i, n, r, c;
    printf("row=");
    scanf("%d", &r);
    scanf("%d", &c);
    printf("\ncolumn :");
    for(i=0; i<r; i++)
    {
        printf("\t");
        for(i=0; i<r-1; i++)
        {
            printf("*");
        }
    }
    return 0;
}