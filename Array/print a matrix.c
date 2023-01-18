/* Writ wa program to print following matrix-
C/R R1 R2 R3
 C1 1 2 4 8 
 C2 2 4 7 6
 C3 3 3 4 2
*/

#include<stdio.h>
int main()
{
    int i, j;
    int array[3][4];

    printf("Input elements of nmatrix :\n");

    for(i=0; i<3; i++)
    {
        for(j=0; j<4; j++)
        {
            printf("Elements [i][j] :");
            scanf("%d", &array[i][j]);
        }

    }

return 0;
}