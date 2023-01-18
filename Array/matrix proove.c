/*
If, 
mat_A= 
3 -4 2
-2 1 0
-1 -1 1
mat_B=
1 2 -2
2 5 -4
3 7 -5

show that, A*B=B*A =I3 
 */
#include<stdio.h>
#define N 100
int main()
{
    int i, j, row=3, column=3;
    int mat_A[N][N], mat_B[N][N] ,  mat_AB[N][N], mat_BA[N][N];
    printf("Input element of A :\n");
    for(i=0; i<row; i++)
    {
        for(j=0; j<column; j++)
        {
            printf("Element[%d][%d]:");
            scanf("%d", &mat_A[i][j]);
        }
    }
    printf("Input element of B :\n");
    for(i=0; i<row; i++)
    {
        for(j=0; j<column; j++)
        {
            printf("Element[%d][%d]:");
            scanf("%d", &mat_B[i][j]);
        }
    }
    ptintf("Matrix A=\n");
    for(i=0; i<row; i++);
    {
        for(j=0; j<column; j++)
        {
            pritnf("%d\t", mat_A[i][j]);
        }
        printf("\n");
    }
    ptintf("Matrix B=\n");
    for(i=0; i<row; i++);
    {
        for(j=0; j<column; j++)
        {
            pritnf("%d\t", mat_B[i][j]);
        }
        printf("\n");
    }




}

