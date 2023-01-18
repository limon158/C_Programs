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
    int r, c;
    int array[100][100];

    printf("Input row and column of the matrix :\n");
    printf("Number of row :");
    scanf("%d", &r);
    printf("\nNumber of column :");
    scanf("%d", &c);

    printf("\nInput elements of nmatrix :\n");

    for(i=0; i<c; i++)
    {
        for(j=0; j<r; j++)
        {
            printf("Elements [i][j] :");
            scanf("%d", &array[i][j]);
        }

    }
    printf("\nThe matrix is : \n");
  for(i=0;i<c;i++)
  {
      printf("\n");
      for(j=0;j<r;j++)
           printf("%d\n",array[i][j]);
  }

return 0;
}