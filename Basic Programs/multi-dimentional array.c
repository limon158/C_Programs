#include<stdio.h>
int main()
{
    int i, j;
    int matrix[2][3] = {{2, 4, 9}, {5, 6, 7}};

    for(i=0; i<2; i++)
    {
        for(j=0; j<3; j++)
        {
            printf("%d \t", matrix[i][j]);
        }
        printf("\n");
    }
}