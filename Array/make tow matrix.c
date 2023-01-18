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
    int row, column;
    int i, j;
    int array_1[100][100], array_2[100][100];

    //----row and column number input from user----

    printf("Input number of row : ");
    scanf("%d", &row);
    printf("\nInput number of column :");
    scanf("%d", &column);
    //----elements input from user----
     
    printf("\nInput element for matrix A:");
    for(i=0; i<row; i++)
    {
        for(j=0; j<column; j++)
        {
            printf("Element of A -[i][j]:", i,j);
            scanf("%d", &array_1[i][j]);
        }
    }
    printf("\nInput element for matrix B :");
    for(i=0; i<row; i++)
    {
        for(j=0; j<column; j++)
        {
            printf("Element of B-[i][j]:");
            scanf("%d", &array_2[i][j]);

        }
    }

    //---- print the matrix----
    printf("The two matrix are :\n");
    printf("Matrix A is=\n");

    for(i=0; i<row; i++)
    {
        for(j=0; j<column; j++)
        {
            printf("%d", array_1[i][j]);
        }
    }
    printf("Matrix B is=\n");
    for(i=1; i<row; i++)
    {
        for(j=0; j<column; j++)
        {
            printf("%d", array_2[i][j]);
        }
    }

return 0;
}