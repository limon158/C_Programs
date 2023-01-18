#include<stdio.h>
#define N 100
int main()
{
    int i, j, row1, column1, row2, column2;
    int array_1[N][N], array_2[N][N];

    printf("Input number of row for mat 1:");
    scanf("%d", & row1);
    printf("\nInput number of column for mat 1:");
    scanf("%d", &column1);

    printf("\nInput element for mat 1:\n");
    for(i=0; i<row1; i++)
    {
        for(j=0; j<column1; j++)
        {
            printf("Element[%d][%d]:", i, j);
            scanf("%d", &array_1[i][j]);
        }
    }
    printf("\nInput number of row for mat 2:");
    scanf("%d", & row2);
    printf("\nInput number of column for mat 2:");
    scanf("%d", &column2);

    printf("\nInput element for mat 2:\n");
    for(i=0; i<row2; i++)
    {
        for(j=0; j<column2; j++)
        {
            printf("Element[%d][%d]:", i, j);
            scanf("%d", &array_2[i][j]);
        }
    }
    printf("\nMATRIX 1(%d*%d)=\n\n", row1, column1);
    for(i=0; i<row1; i++)
    {
        for(j=0; j<column1; j++)
        {
            printf("%d\t", array_1[i][j]);
        }
        printf("\n");
    }
    printf("\nMATRIX 2(%d*%d)=\n\n", row2, column2);
    for(i=0; i<row2; i++)
    {
        for(j=0; j<column2; j++)
        {
            printf("%d\t", array_2[i][j]);
        }
        printf("\n");
    }
return 0;
}