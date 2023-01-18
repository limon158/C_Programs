/* 
Write a program  to make two matrix and print it- (matrix should be 3*4):

Sample Output: 
A=
1 2 3 4
1 2 3 4
1 2 3 4 
B=
4 3 2 1
4 3 2 1
4 3 2 1
*/ 
#include<stdio.h>
int main()
{
    int row_1, row_2, column_1, column_2;
    int i=0, j=0;
    int array_1[100][100], array_2[100][100];

    //----row and column number input from user--------------------------------->OK

    printf("Input number of row of matrix  A: ");
    scanf("%d", &row_1);
    printf("\nInput number of column of matrix A:");
    scanf("%d", &column_1);

    printf("\nInput number of row of matrix  B: ");
    scanf("%d", &row_2);
    printf("\nInput number of column of matrix B:");
    scanf("%d", &column_2);

    //----elements input from user for A---------------------------------------->OK
     
    printf("\nInput element for matrix A:");
    for(i=0; i<row_1; i++)
    {
        for(j=0; j<column_1; j++)
        {
            printf("\nElement of A -[%d][%d]:", i,j);
            scanf("%d", &array_1[i][j]);
        }
    }
    //----element input from user for B------------------------------------------>OK

    printf("\nInput element for matrix B :");
    for(i=0; i<row_2; i++)
    {
        for(j=0; j<column_2; j++)
        {
            printf("\nElement of B-[%d][%d]:", i, j);
            scanf("%d", &array_2[i][j]);

        }
    }

    //---- print the matrix A---------------------------------------------------->OK

    printf("The two matrix are :\n");
    printf("\nMatrix A is=\n");

    for(i=0; i<row_1; i++)
    {
        for(j=0; j<column_1; j++)
        {   
            printf("%d ", array_1[i][j]);
           
        }
         printf("\n");
    }

    //----[print matrix B-------------------------------------------------------->OK

    printf("\nMatrix B is=\n");
    for(i=0; i<row_2; i++)
    {
        for(j=0; j<column_2; j++)
        {
            printf("%d ", array_2[i][j]);
           
        }
         printf("\n");
    }

return 0;
}