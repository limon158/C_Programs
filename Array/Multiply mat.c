#include<stdio.h>
#include<math.h>
int main()
{
    int row_1, row_2, column_1, column_2;
    int i, j, k, SUM=0;
    int MAT_A[100][100], MAT_B[100][100], Res_MAT[100][100];

    //-----USER INPUT-----------------------------------------------------(1)OK

    printf("Input number of row and column of MATRIX -\n");

    //-----Input configuraton for matrix A--------------------------------(2)OK

    printf("Number of row for mat_A    :");
    scanf("%d", &row_1);
    printf("Number of column for mat_A :");
    scanf("%d", &column_1);

    //-----Input configuration for matrix B-------------------------------(3)OK

    printf("\nNumber of row for mat_B  :");
    scanf("%d", &row_2);
    printf("Number of column for mat_B :");
    scanf("%d", &column_2);

    while(column_2!=row_1)
    {
        printf("Error!! column of first matrix is not equal to row of second matrix!\n");

        //-----Input configuraton for matrix A--------------------------------(4)OK

        printf("Number of row for mat_A      : ");
        scanf("%d", &row_1);
        printf("\nNumber of column for mat_A :");
        scanf("%d", &column_1);

        //-----Input configuration for matrix B-------------------------------(6)OK

        printf("Number of row for mat_B      : ");
        scanf("%d", &row_2);
        printf("\nNumber of column for mat_B :");
        scanf("%d", &column_2);

    }
    //-----Input elements of matrix A-----------------------------------------(7)OK
    printf("\nInput the elements of MAT_A and MAT_B \n");
    printf("\nInput elements to A:\n");
    for(i=0; i<row_1; i++)
    {
        for(j=0; j<column_1; j++)
        {
            printf("Element of MAT_A -[%d][%d] :", i, j);
            scanf("%d", &MAT_A[i][j]);
        }

    }

    //-----Input elements of matrix B-----------------------------------------(8)OK

    printf("\nInput elements to B:\n");
    for(i=0; i<row_2; i++)
    {
        for(j=0; j<column_2; j++)
        {
            printf("Element of MAT_B -[%d][%d] :", i, j);
            scanf("%d", &MAT_B[i][j]);
        }

    }

    //-----PRINT------------------------------------------------------------(9)OK

    printf("\nMatrix A and B is :\n");

    //-----Print matrix A--------------------------------------------------(10)OK

    printf("A=\n");
    for(i=0; i<row_1;i++)
    {
        for(j=0; j<column_1; j++)
        {
            printf("%d ",MAT_A[i][j]);
        }
        printf("\n");
    }

    //-----Print matrix B--------------------------------------------------(11)OK

    printf("\nB=\n");
    for(i=0; i<row_2;i++)
    {
        for(j=0; j<column_2; j++)
        {
            printf("%d ",MAT_B[i][j]);
        }
        printf("\n");
    }
    //-----MULTIPLICATION---------------------------------------------------(11)OK

    for(i=0; i<row_1; i++)
    {
        for(j=0; j<column_2; j++)
        {
            for(k=0; k<column_1; k++)
            {
                SUM = SUM + (MAT_A[i][k] * MAT_B[k][j]);
            }
            SUM = Res_MAT[i][j];
            SUM = 0;
        }
    }

    //-----Print Result--------------------------------------------------------(12)OK

    printf("Res_MAT=\n");

    for(i=0; i<row_1; i++)
    {
        for(j=0; j=column_2; j++)
        {
            printf("%d ",Res_MAT[i][j]);
        }
        printf("\n");
    }


return 0;
}

