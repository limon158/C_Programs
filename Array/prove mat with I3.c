#include<stdio.h>
#define N 100
int main()
{
    int i, j, k, row=3, column=3, sum=0;
    int mat_A[N][N]={{3, -4, 2}, {-2, 1, 2}, {-1, -1, 1}};
    int mat_B[N][N]={{1, 2, -2}, {2, 5, -4}, {3, 7, -5}};
    int mat_I[N][N]={{1, 0, 0}, {0, 1, 0}, {0, 0, 1}};
    int mat_AB[N][N], mat_BA[N][N];

    printf("Matrix A=\n");
    for(i=0; i<row; i++)
    {
        for(j=0; j<column; j++)
        {
            printf("%d\t", mat_A[i][j]);
        }
        printf("\n");
    }
    printf("Matrix B=\n");
    for(i=0; i<row; i++)
    {
        for(j=0; j<column; j++)
        {
            printf("%d\t", mat_B[i][j]);
        }
        printf("\n");
    }
    printf("Matrix I3=\n");
    for(i=0; i<row; i++)
    {
        for(j=0; j<column; j++)
        {
            printf("%d\t", mat_I[i][j]);
        }
        printf("\n");
    }
    //multiply matrix AB

    for(i=0; i<row; i++)
    {
        for(j=0; j<column; j++)
        {
            sum=0;
            for(k=0; k<column; k++)
            {
                sum=sum+(mat_A[i][j]*mat_B[i][j]);
            }
            mat_AB[i][j]=sum;
        }
    }
    //multiplu matrix BA

    for(i=0; i<row; i++)
    {
        for(j=0; j<column; j++)
        {
            sum=0;
            for(k=0; k<column; k++)
            {
                sum=sum+(mat_B[i][j]*mat_A[i][j]);
            }
            mat_BA[i][j]=sum;
        }
    }
    //print matrix AB and BA
    printf("Matrix AB=\n");
    for(i=0; i<row; i++)
    {
        for(j=0; j<column; j++)
        {
            printf("%d\t", mat_AB[i][j]);
        }
        printf("\n");
    }
    printf("Matrix BA=\n");
    for(i=0; i<row; i++)
    {
        for(j=0; j<column; j++)
        {
            printf("%d\t", mat_BA[i][j]);
        }
        printf("\n");
    } 
    
    if(mat_AB[N][N] = mat_BA[N][N]=mat_I[N][N])
    {
        printf("\nAB=BA=I3 (proved)");
    }
    else{
        printf("\nAB!=BA!=I3");
    }

return 0;
}