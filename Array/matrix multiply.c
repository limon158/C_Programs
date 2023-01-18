// Write a  program to multiply a matrix.
#include<stdio.h>
int main()
{
    int i, j, k, SUM=0;
    int r1, c1, r2, c2;
    int matA[100][100], matB[100][100], resmat[100][100];

    printf("Number of row and column of matA :");
    scanf("%d%d", &r1, &c1);
    printf("Number of row and column of matB :");
    scanf("%d%d", &r2, &c2);
    
    printf("\nEnter element of matA:\n");
    for(i=0; i<r1; i++)
    {
        for(j=0; j<c1; j++)
        {
            printf("Element[%d][%d] :",i, j);
            scanf("%d", &matA[i][j]);
        }
    }
    printf("\nEnter element for matB:\n");
    for(i=0; i<r2; i++)
    {
        for(j=0; j<c2; j++)
        {
            printf("Element[%d][%d] :",i, j);
            scanf("%d", &matB[i][j]);
        }
    }
    printf("\nMatrix A=\n");
    for(i=0; i<r1; i++)
    {
        for(j=0; j<c1; j++)
        {
            printf("%d ", matA[i][j]);
        }
        printf("\n");
    }
    printf("\nMatrix A=\n");
    for(i=0; i<r2; i++)
    {
        for(j=0; j<c2; j++)
        {
            printf("%d ", matB[i][j]);
        }
        printf("\n");
    }

    return 0;
}