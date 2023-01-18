//Adding two matrix
#include<stdio.h>
#define N 100
int main()
{
    int row, column, i, j, result;
    int mat_A[N][N], mat_B[N][N], result_mat[N][N];

    printf("Input nuber of row of matrix:");
    scanf("%d", &row);
    printf("Input number of column of matrix:");
    scanf("%d", &column);

    printf("Input Element of mat_A:\n");
    for(i=0; i<row; i++)
    {
        for(j=0; j<column; j++)
        {
            printf("Element[%d][%d]:", i, j);
            scanf("%d", &mat_A[i][j]);
        }
    }
    printf("Input element of mat_B:\n");
    for(i=0; i<row; i++)
    {
        for(j=0; j<column; j++)
        {
            printf("Element[%d][%d]:", i, j);
            scanf("%d", &mat_B[i][j]);
        }
    }
    printf("mat_A is=\n");
    for(i=0; i<row; i++)
    {
        for(j=0; j<column; j++)
        {
            printf("%d\t", mat_A[i][j]);
        }
        printf("\n");
    }
    printf("mat_B is=\n");
    for(i=0; i<row; i++)
    {
        for(j=0; j<column; j++)
        {
            printf("%d\t", mat_B[i][j]);
        }
        printf("\n");
    }
    
    for(i=0; i<row; i++)
    {
        for(j=0; j<column; j++)
        {
            result=mat_A[i][j]+mat_B[i][j];
            result_mat[i][j]=result;
        }
    }
    printf("Result is=\n");
    for(i=0; i<row; i++)
    {
        for(j=0; j<column; j++)
        {
            printf("%d\t", result_mat[i][j]);
        }
        printf("\n");
    }

return 0;
}