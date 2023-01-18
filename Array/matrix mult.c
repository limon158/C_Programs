//Program for multiply two matrix
#include<stdio.h>
#define N 100
int main()
{
    int i, j, k, row1,column1, row2, column2, sum=0;
    int mat_A[N][N], mat_B[N][N], result[N][N];

    printf("Input number of row for mat_A :");
    scanf("%d", &row1);
    printf("Input number of column for mat_A:");
    scanf("%d", &column1);
    printf("Input element of mat_A:\n");
    for(i=0; i<row1; i++)
    {
        for(j=0; j<column1; j++)
        {
            printf("Element[%d][%d]:", i, j);
            scanf("%d", &mat_A[i][j]);
        }
    }

    printf("Input number of row for mat_B :");
    scanf("%d", &row2);
    printf("Input number of column for mat_B:");
    scanf("%d", &column2);
    printf("Input element of mat_B:\n");
    for(i=0; i<row2; i++)
    {
        for(j=0; j<column2; j++)
        {
            printf("Element[%d][%d]:", i, j);
            scanf("%d",&mat_B[i][j]);
        }
    }
    printf("mat_A=\n");
    for(i=0; i<row1; i++)
    {
        for(j=0; j<column1; j++)
        {
            printf("%d\t", mat_A[i][j]);
        }
        printf("\n");
    }
    printf("mat_B=\n");
    for(i=0; i<row2; i++)
    {
        for(j=0; j<column2; j++)
        {
            printf("%d\t", mat_B[i][j]);
        }
        printf("\n");
    }
    if(column1!=row2){
        printf("Error!! column1 not equal row2. Try again...\n");
    }
    else
    {
        for(i=0; i<row1; i++)
        {
            for(j=0; j<column2; j++)
            {
                sum=0;
                for(k=0; k<column1; k++)
                {
                    sum=sum+(mat_A[i][k]*mat_B[k][j]);
                }
                result[i][j]=sum;
            }
        }
    }
    printf("Multiplied Result=\n");
    for(i=0; i<row1; i++)
    {
        for(j=0; j<column2; j++)
        {
            printf("%d\t", result[i][j]);
        }
        printf("\n");
    }

    
return 0;
}

