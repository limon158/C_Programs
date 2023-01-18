#include<stdio.h>
#define N 20
int main()
{
    int r1, r2, c1, c2;
    int i, j, k, l;
    int a[N][N], b[N][N];

    printf("r1:");
    scanf("%d", &r1);
    printf("c1:");
    scanf("%d", &c1);
    printf("r2:");
    scanf("%d", &r2);
    printf("c2:");
    scanf("%d", &c2);

    printf("%d %d %d %d", r1, c1, r2, c2);
    printf("\n");

    for(i=0; i<r1; i++)
    {
        for(j=0; j<c1; j++)
        {
            printf("index[%d][%d]:", i, j);
            scanf("%d", &a[i][j]);
        }
    }
    for(k=0; k<r2; k++)
    {
        for(l=0; l<c2; l++)
        {
            printf("index[%d][%d]:", k, l);
            scanf("%d", &b[k][l]);
        }
    }
    

    printf("\na=\n");
    for(i=0; i<r1; i++)
    {
        for(j=0; j<c1; j++)
        {
            printf("%d\t", a[i][j]);
        }
        printf("\n");
    }
    printf("\nb=\n");
    for(k=0; k<r2; k++)
    {
        for(l=0; l<c2; l++)
        {
            printf("%d\t", b[k][l]);
        }
        printf("\n");
    }

}